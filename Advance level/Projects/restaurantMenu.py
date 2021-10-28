# Global Variables
import datetime

order = []
c_name = ' '
c_contact = ' '
quantity = 0
choice = 'null'
price = 0.0
Frontend = ['UpdateMenu', 'Delete Menu', 'TakeOrder', 'Display Menu', 'Logout']
menu = ['Burgers', 'Appetizers', 'Fries', 'Beverage']
Burgers = ['CheeseBurger', 4, 'Whopper', 4.5, 'Hamburger', 4.5]
Appetizers = ['Hash Browns', 2, 'Crispy Taco', 2.5, 'Chicken Nuggets', 3, 'Chicken Jr.', 2.75]
Fries = ['Mozzarella Sticks', 1.5, 'French Fries', 2, 'Onion Rings', 1.5]
Beverages = ['Pepsi', 1.5, 'Coke', 1.5, 'Lemonade', 1.5, 'Mojito', 2]


def cls():
    for i in range(50):
        print("\n")


def Main():
    cls()
    global order
    global c_name
    global c_contact
    ch = 0
    print("Welcome")
    for i in range(len(Frontend)):
        print(i + 1, ".\t", Frontend[i])
    while True:
        try:
            ch = int(input("Enter Your Choice : "))
        except ValueError:
            print("invalid input!!! Try again")
            continue
        else:
            if 0 < ch < 6:
                break
            else:
                print("invalid input!!! Try again")
                continue
    if ch == 1:
        UpdateItem()
    elif ch == 2:
        DeleteItem()
    elif ch == 3:
        order.clear()
        c_name = input("Name of the customer: ")
        c_contact = input("Contact details: ")
        Order()
    elif ch == 4:
        Display()
    elif ch == 5:
        print("Logging out!!")
        exit(0)
    else:
        input("Wrong choice!!\nPress enter to go back to homepage ")
        Main()


def UpdateItem():
    global menu
    global Burgers
    global Appetizers
    global Fries
    global Beverages
    ch = 0
    cls()
    for i in range(len(menu)):
        print(i + 1, ".\t", menu[i])
    while True:
        try:
            ch = int(input("\nWhich category you want to update ?\n"))
        except ValueError:
            print("invalid input!!! Try again")
            continue
        else:
            if 0 < ch < 4:
                break
            else:
                print("invalid input!!! Try again")
                continue
    if ch == 1:
        dish = input("Enter Dish name : ")
        cost = float(input("Enter Cost : "))
        Burgers += [dish]
        Burgers += [cost]
    elif ch == 2:
        dish = input("Enter Dish name : ")
        cost = float(input("Enter Cost : "))
        Appetizers += [dish]
        Appetizers += [cost]
    elif ch == 3:
        dish = input("Enter Dish name : ")
        cost = float(input("Enter Cost : "))
        Fries += [dish]
        Fries += [cost]
    elif ch == 4:
        dish = input("Enter Dish name : ")
        cost = float(input("Enter Cost : "))
        Beverages += [dish]
        Beverages += [cost]
    print("Successfully added elements:\n")
    input("Press enter to go back to homepage ")
    Main()


def DeleteItem():
    global Burgers
    global Appetizers
    global Fries
    global Beverages
    ch = 0
    cls()
    for i in range(len(menu)):
        print(i+1, ".\t", menu[i])
    while True:
        try:
            ch = int(input("From which category you want to delete ? "))
        except ValueError:
            print("invalid input!!! Try again")
            continue
        else:
            if 0 < ch < 5:
                break
            else:
                continue
    if ch == 1:
        cls()
        for i in range(len(Burgers)):
            if i % 2 == 0:
                print(Burgers[i])
        ch1 = input("Enter dish name that you want to delete : ")
        for i in range(len(Burgers)):
            if ch1 == Burgers[i]:
                del Burgers[i]
                del Burgers[i]
                break
    elif ch == 2:
        cls()
        for i in range(len(Appetizers)):
            if i % 2 == 0:
                print(Appetizers[i])
        ch1 = input("Enter dish name that you want to delete : ")
        for i in range(len(Appetizers)):
            if ch1 == Appetizers[i]:
                del Appetizers[i]
                del Appetizers[i]
                break
    elif ch == 3:
        cls()
        for i in range(len(Fries)):
            if i % 2 == 0:
                print(Fries[i])
        ch1 = input("Enter dish name that you want to delete : ")
        for i in range(len(Fries)):
            if ch1 == Fries[i]:
                del Fries[i]
                del Fries[i]
                break
    elif ch == 4:
        cls()
        for i in range(len(Beverages)):
            if i % 2 == 0:
                print(Beverages[i])
        ch1 = input("Enter dish name that you want to delete : ")
        for i in range(len(Beverages)):
            if ch1 == Beverages[i]:
                del Beverages[i]
                del Beverages[i]
                break
    else:
        input("Wrong choice!!\nPress enter to go back.")
        Main()
    input("Item deleted Successfully\nPress enter to go back")
    Main()


def Order():
    global menu
    global Burgers
    global Appetizers
    global Fries
    global Beverages
    global order
    global quantity
    loop = 'y'
    ch = 0
    while loop == 'y':
        cls()
        print('Select your order:\n')
        for i in range(len(menu)):
            print(i+1, ".\t", menu[i])
        while True:
            try:
                ch = int(input('\nEnter your choice : '))
            except ValueError:
                print("invalid input!!! Try again")
                continue
            else:
                if 0 < ch < 5:
                    break
                else:
                    continue
        if ch == 1:
            cls()
            print('item\t\t\t\t\tPrice\n')
            for i in range(len(Burgers)):
                if i % 2 == 0:
                    print(Burgers[i], "\t\t$", Burgers[i+1])
            ch = input("Enter your choice : ")
            while True:
                try:
                    quantity = int(input("How many of these do you want? : "))
                except ValueError:
                    print("invalid input!!! Try again")
                    continue
                else:
                    break
            for i in range(len(Burgers)):
                if ch == Burgers[i]:
                    order += [Burgers[i]]
                    order += [float(Burgers[i+1])]
                    order += [quantity]
        elif ch == 2:
            cls()
            print('item\t\t\t\t\tPrice\n')
            for i in range(len(Appetizers)):
                if i % 2 == 0:
                    print(Appetizers[i], "\t\t$", Appetizers[i + 1])
            ch = input("Enter your choice : ")
            while True:
                try:
                    quantity = int(input("How many of these do you want? : "))
                except ValueError:
                    print("invalid input!!! Try again")
                    continue
                else:
                    break
            for i in range(len(Appetizers)):
                if ch == Appetizers[i]:
                    order += [Appetizers[i]]
                    order += [float(Appetizers[i + 1])]
                    order += [quantity]
        elif ch == 3:
            cls()
            print('item\t\t\t\t\tPrice\n')
            for i in range(len(Fries)):
                if i % 2 == 0:
                    print(Fries[i], "\t\t$", Fries[i + 1])
            ch = input("Enter your choice : ")
            while True:
                try:
                    quantity = int(input("How many of these do you want? : "))
                except ValueError:
                    print("invalid input!!! Try again")
                    continue
                else:
                    break
            for i in range(len(Fries)):
                if ch == Fries[i]:
                    order += [Fries[i]]
                    order += [float(Fries[i + 1])]
                    order += [quantity]
        elif ch == 4:
            cls()
            print('item\t\t\t\t\tPrice\n')
            for i in range(len(Beverages)):
                if i % 2 == 0:
                    print(Beverages[i], "\t\t$", Beverages[i + 1])
            ch = input("Enter your choice : ")
            while True:
                try:
                    quantity = int(input("How many of these do you want? : "))
                except ValueError:
                    print("invalid input!!! Try again")
                    continue
                else:
                    break
            for i in range(len(Beverages)):
                if ch == Beverages[i]:
                    order += [Beverages[i]]
                    order += [float(Beverages[i + 1])]
                    order += [quantity]
        else:
            print('Error!! Only chose item given in menu')
        loop = input("Do you want to add more items? \n")
        if loop == 'y' or loop == "yes":
            pass
        else:
            receipt()


def DeleteOrder():
    global order
    global price
    ch = ch1 = 0
    j = 1
    cls()
    for i in range(len(order)):
        if i % 3 == 0:
            print(j, ".\t", order[i])
            j += 1
    while True:
        try:
            ch = int(input("Select the item that you want to delete : "))
        except ValueError:
            print("invalid input!!! Try again")
            continue
        else:
            break
    data = (ch - 1)*3
    if ch > int(len(order)/3):
        input("No Data found! Press enter to try again.")
        DeleteOrder()
    for i in range(len(order)):
        if data == i:
            if order[i + 2] > 1:
                while True:
                    try:
                        ch1 = int(input("How many of them you want to remove? "))
                    except ValueError:
                        print("invalid input!!! Try again")
                        continue
                    else:
                        break
                if ch1 > order[i + 2]:
                    input("Can't remove more than bought. press enter to try again")
                    DeleteOrder()
                elif ch1 == order[i + 2]:
                    del order[i]
                    del order[i]
                    del order[i]
                    receipt()
                elif ch1 < order[i + 2]:
                    order[i+2] = order[i + 2] - ch1
                    receipt()
            elif order[i+2] == 1:
                del order[i]
                del order[i]
                del order[i]
                receipt()
            else:
                print("Error try again!!")
                DeleteOrder()


def receipt():
    cls()
    global price
    global c_name
    global c_contact
    price = 0.0
    ch1 = 0
    j = 0
    print('\n*****************************Recipt******************************\n')
    print("\tName :", c_name)
    print("\tContact :", c_contact)
    print("\tTime of order :", datetime.datetime.now(), "\n")
    for i in range(len(order)):
        if i % 3 == 0:
            j += 1
            print('\t', j, '. You ordered ', order[i+2], "-", order[i], ': cost $', order[i+1]*order[i+2])
            price += order[i+1]*order[i+2]
    print('\t >>>>Total Bill : $', price, "\n\n\tThanks!! We hope we'll see you soon")
    print('\n\n******************************END********************************\n')
    ch = input("\nDo you wanna Update/Cancel the order? ")
    if ch == 'y' or ch == "yes":
        while True:
            try:
                ch1 = int(input("Press 1 if you want to Delete something\nPress 2 if you wanna Add something.\n"
                                "Press 3 if you want to cancel the order.\n"))
            except ValueError:
                print("invalid input!!! Try again")
                continue
            else:
                if 0 < ch1 < 4:
                    break
                else:
                    print("invalid input!!! Try again")
                    continue
        if ch1 == 1:
            DeleteOrder()
        elif ch1 == 2:
            Order()
        elif ch1 == 3:
            order.clear()
            input("Order cancelled.\nPress enter to continue. ")
            Main()
    else:
        ch = input("Do you want to take another order? ")
        if ch == 'y' or ch == "yes":
            order.clear()
            c_name = input("Name of the customer: ")
            c_contact = input("Contact details: ")
            Order()
        else:
            Main()


def Display():
    ch = 0
    while True:
        cls()
        for i in range(len(menu)):
            print(i+1, ".\t", menu[i])
        while True:
            try:
                ch = int(input('\nWhich Section you want to look at?  : '))
            except ValueError:
                print("invalid input!!! Try again")
                continue
            else:
                if 0 < ch < 5:
                    break
                else:
                    print("invalid input!!! Try again")
                    continue
        cls()
        if ch == 1:
            cls()
            print('item\t\t\tPrice\n')
            for i in range(len(Burgers)):
                if i % 2 == 0:
                    print(Burgers[i], "\t\t$", Burgers[i + 1])
        elif ch == 2:
            cls()
            print('item\t\t\tPrice\n')
            for i in range(len(Appetizers)):
                if i % 2 == 0:
                    print(Appetizers[i], "\t\t$", Appetizers[i + 1])
        elif ch == 3:
            cls()
            print('item\t\t\tPrice\n')
            for i in range(len(Fries)):
                if i % 2 == 0:
                    print(Fries[i], "\t\t$", Fries[i + 1])
        elif ch == 4:
            cls()
            print('item\t\t\tPrice\n')
            for i in range(len(Beverages)):
                if i % 2 == 0:
                    print(Beverages[i], "\t\t$", Beverages[i + 1])
        loop = input("Do you want to see other items ? ")
        if loop == 'y' or loop == "yes":
            pass
        else:
            Main()


cls()
username = 'emp'
password = '1234'
while True:
    user = input("Enter username : ")
    pwd = input("Enter password : ")
    if user == username and pwd == password:
        Main()
    else:
        print("Wrong Credentials !! \nPlease login again:\n")
