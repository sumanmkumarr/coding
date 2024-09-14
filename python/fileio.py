# r--read mode  ,w--write mode

# ---------------------------------
#  reading a file
# f=open(r"C:\Users\suman\Desktop\coding\python\demo.txt","r")

# # f.read return entire data from file to data
# # data=f.read(); 

# # print(data)
# # print(type(data))


# line1=f.readline()
# print(line1)

# line2=f.readline()
# print(line2)

# f.close()



# -------------------------------------------
# write a file (w  - first it delete the data and then it we write the data)
# append (a - it add data at the data of the file without deleting anything)

# f=open(r"C:\Users\suman\Desktop\coding\python\demo.txt","w")

# f.write("My roll no is AP21110010283")

# f.close()


# ----------------------------------------------------------
# append - a
# f=open(r"C:\Users\suman\Desktop\coding\python\demo.txt","a")

# f.write("\nMy name is suman kumar")

# f.close()


# -------------------------------------------------------------
# when file is not there and try to open then python automatically create that file
# f=open("sample.txt","w")
# f.write("qwert")
# f.close()



# ------------------------------
# r+ - it do reading and writing(it does not truncate the entire data ,but it do overwriting from beginning)

# f=open("sample.txt","r+")
# f.write("my name is suman kumar")
# print(f.read())
# f.close()




# ------------------------
# w+ -- it is for reading and writing(but here it truncate the entite data,then we write)

# f=open("sample.txt","w+")
# f.write("my roll no is AP21110010283")
# print(f.read())
# f.close()




# ----------------------------
# a+ - it append and read

# f=open("sample.txt","a+")
# f.write("abc")
# print(f.read())
# f.close()




# ---------------------
# summary
# r+   -- read + overwrite (pointer at start) - no truncate
# w+   -- read + overwite  (no meaning of pointer) - truncate
# a+   -- read + append  (poiter at end) - no truncate




# ------------------------------
# file by with
#  while we use with then no need to close the file
# with open("sample.txt","r") as f:
#     data=f.read()
#     print(data)

# with open("sample.txt","w") as f:
#     f.write("asd")



# -------------------------------------------------
# deleating a file
# os is preinstalled library but tensorflow is not,for that we need to install tensorflow then only we can use

# import os
# os.remove("sample.txt")
# #  it will delete the file


# -------------------------
# practice question  -- replace the qwe data from file by suman
# with open("sample.txt","w") as f:
#     f.write("my name is qwe\n my roo is 283\n i am from bihar\n")

# with open("sample.txt","r") as f:
#     data=f.read()

# new_data=data.replace("qwe","suman")
# print(new_data)

# with open("sample.txt","w") as f:
#     f.write(new_data)




# -----------------------------------------
# practice question -- search bihar word is there or not in file
# state="bihar"
# with open("sample.txt","r") as f:
#     data=f.read()
#     if(data.find(state)!=-1):
#         print("found")
#     else:
#         print("not found")



# ---------------------------------------------
# in which line bihar word is there
# def line_no():
#     state="bihar"
#     data =True
#     line=1
#     with open("sample.txt","r") as f:
#         while data:
#             data=f.readline()
#             if(state in data):
#                 print(line)
#                 return
#             else:
#                 line +=1
#     return -1
  

# line_no()





# --------------------------------------
# practice question -- find number of even number in file
# create file with numbers
with open("sample.txt","w") as f:
    f.write("3,6,4,8,90,1,7")



def no_of_even():
    with open("sample.txt","r") as f:
        data=f.read()
        arr=data.split(",")
        num=0
        for val in arr:
            if(int(val) % 2==0):
                num=num+1
    return num

print(no_of_even())