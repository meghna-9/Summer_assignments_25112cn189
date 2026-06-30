students = []
while True:
    print("\n----- Student Record System -----")
    print("1. Add Student")
    print("2. Display Students")
    print("3. Search Student")
    print("4. Exit")

    choice = input("Enter your choice: ")
    if choice == "1":
        roll = input("Enter Roll Number: ")
        name = input("Enter Name: ")
        course = input("Enter Course: ")

        student = [roll, name, course]
        students.append(student)
        print("Student added successfully.")
    elif choice == "2":
        if len(students) == 0:
            print("No student records found.")
        else:
            print("\nStudent Records")
            for s in students:
                print("Roll:", s[0])
                print("Name:", s[1])
                print("Course:", s[2])
                print()
    elif choice == "3":
        roll = input("Enter Roll Number to search: ")
        found = False
        for s in students:
            if s[0] == roll:
                print("Student Found")
                print("Name:", s[1])
                print("Course:", s[2])
                found = True
                break
        if not found:
            print("Student not found.")
    elif choice == "4":
        print("Program closed.")
        break
    else:
        print("Invalid choice.")