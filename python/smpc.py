import numpy as np
from sklearn import datasets
from sklearn.model_selection import train_test_split
from sklearn.svm import SVC
import syft as sy
from syft.core.common.uid import UID
# Create a local worker
# hook = sy.TorchHook()

# Create two VirtualWorkers (parties)
alice = sy.Worker(id=UID())
bob = sy.Worker(id=UID())

# Load dataset
iris = datasets.load_iris()
X = iris.data
y = iris.target

# Split the dataset into two parts (simulating data held by two parties)
X_alice, X_bob, y_alice, y_bob = train_test_split(X, y, test_size=0.5, random_state=42)

# Send data to respective workers
X_ptr_alice = sy.Tensor(X_alice).send(alice)
y_ptr_alice = sy.Tensor(y_alice).send(alice)

X_ptr_bob = sy.Tensor(X_bob).send(bob)
y_ptr_bob = sy.Tensor(y_bob).send(bob)

# Train SVM model collaboratively
svm_model = SVC(kernel='linear')
svm_model_alice = svm_model.fit(X_ptr_alice.get(), y_ptr_alice.get())
svm_model_bob = svm_model.fit(X_ptr_bob.get(), y_ptr_bob.get())

# Perform Secure Multiparty Computation (SMC) to aggregate models
svm_model_alice_ptr = svm_model_alice.send(bob)
svm_model_bob_ptr = svm_model_bob.send(alice)

svm_model_combined = (svm_model_alice_ptr + svm_model_bob_ptr) / 2

# Evaluate the aggregated model (optional)
X_test, y_test = datasets.load_iris(return_X_y=True)
accuracy = svm_model_combined.score(X_test, y_test)
print("Accuracy:", accuracy)
