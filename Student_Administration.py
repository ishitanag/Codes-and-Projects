import csv

def write_into_csv (info_list):
    with open('student_info.csv','a', newline ='') as csv_file:
        writer = csv.writer(csv_file)
        if csv_file.tell() == 0:
            writer.writerow(["Name", "Age", "Contact Number", "Email-ID"]) # for creating the top row
        writer.writerow(info_list)#the correct student info is being updated to the csv file

if __name__ == '__main__':
    condition = True
    num = 1
    while (condition):
        student_info = input("Enter student information  for student #{} as follows (Name Age Contact_Number Email-ID): ".format(num)) #taking user input of the student information

        student_info_list = student_info.split(' ')#splitting the student info with blank set as the delimiter 
        print ("The entered information is: \nName: {}\nAge: {}\nContact Number: {}\nEmail-ID: {}".format(student_info_list[0], student_info_list[1], student_info_list[2], student_info_list[3]))
        choice_check = input ("Is the entered student information correct? (yes/no): ")
        if choice_check=='yes':
            write_into_csv(student_info_list) #function call to update the csv file with the new information
            condition_check = input ("Enter (yes/no) if you want to enter information for another student: ")
            if condition_check == 'yes':
                condition = True
                num = num+1
            else:
                condition = False
        else:
            print ("Please re-enter the values!")
