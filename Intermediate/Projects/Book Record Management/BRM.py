'''
                    *Book Record Management in Python*
    With this project a used can Add/Delete/Update/View the book records

    the project is implement in python
    
    Inbuilt data structures used: LIST
    concepts of functions, try-catch statements, if else statements and loops are used in this program.

'''


Books=[]
def gap():
    print("\n"*2)
    print(" * "*20)
def add_book():
    print("\t # Adding Book Record # \n")
    book_name=input("Enter Book Name: ")
    book_author=input("Enter \'{}\' Author: ".format(book_name))
    try:
        book_price=float(input("Enter \'{}\' Price: ".format(book_name)))
        l=[book_name,book_author,book_price]
        Books.append(l)
        input("\nBook Added Successfully!\nPress Any Key To Continue..")
    except:
        input("INCORRECT DATA!\n\t\tPress any key to continue..")
def delete_book():
    print("\t # Deleting Book Record # \n")
    print("\tBook_ID\tBook_Name\tBook_Author\tBook_Price")
    for i in range(len(Books)):   
        print(" \t {0} \t {1}\t\t{2}\t\t{3}".format(i,Books[i][0],Books[i][1],Books[i][2]))
    try:
        ch=int(input("\nEnter The ID of Book to be Removed"))
        Books.pop(ch)
        input("\nBook Deleted Successfully!\nPress Any Key To Continue..")
    except:
        input("INCORRECT DATA!\n\t\tPress any key to continue..")
def update_book():
    print("\t # Updating Book Record #\n\n")
    print("\tBook_ID\tBook_Name\tBook_Author\tBook_Price")
    for i in range(len(Books)):   
        print(" \t {0} \t {1}\t\t{2}\t\t{3}".format(i,Books[i][0],Books[i][1],Books[i][2]))
    try:
        ch=int(input("\nEnter The ID of Book to be Updated"))
        Books[ch][0]=input("\nEnter New Book Name: ")
        Books[ch][1]=input("Enter New Author Name: ")
        Books[ch][2]=float(input("Enter New Price: "))
        input("Record updated Successfully!\nPress Any Key To Continue..")
    except:
        input("INCORRECT DATA!\n\t\tPress any key to continue..")
def view_book():
    print("\t # Viewing Book Record # \n\n")
    print("\tBook_ID\tBook_Name\tBook_Author\tBook_Price")
    for i in range(len(Books)):   
        print(" \t {0} \t {1}\t\t{2}\t\t{3}".format(i,Books[i][0],Books[i][1],Books[i][2]))
    input("\nPress Any key to return to Continue")
def HomePage():
    a=True
    while(a):
        gap()
        print("\t# Welcome To Book Record Management! #")
        print("\n\t1:Add Boook\t\t2:Delete Book\n\t3:Update Book\t\t4:View Book")
        print("\t\t#To exit press \'quit\'#\n")
        ch=input("Enter Your Choice:")
        if(ch=='1'):
            gap()
            add_book()
        elif(ch=='2'):
            gap()
            delete_book()
        elif(ch=='3'):
            gap()
            update_book()
        elif(ch=='4'):
            gap()
            view_book()
        elif(ch=='quit'):
            a=False
        else:
            input("INCORRECT DATA!\n\t\tPress any key to continue..")
HomePage()
gap()
print("\n\n* * Thank You! Do Visit Again..!! * *")
