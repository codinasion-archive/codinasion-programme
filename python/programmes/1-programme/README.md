---
metatitle: Store the details of persons
description: Write a python program to store the details of persons given by users at run-time in the format given below. Also add functionality in this program to list all person from given city and age group given by user. The age group 21-30 should have all the persons those are having age between 21 to 30.
slug: /python/programmes/1
---

### Write a python program to store the details of persons given by users at run-time in the format given below. Also add functionality in this program to list all person from given city and age group given by user. The age group 21-30 should have all the persons those are having age between 21 to 30.

```
"Name"   "Age" "City"    "Mobile Number"   "Salary"
"Ajay"    25   "Delhi"   "1234567890"       25000
"Arun"    36   "Ajmer"   "0987654321"       40000
```

---

```python title=1.py lineNumbers
# python programme 1

# pip install tabulate
# for displaying data in tables
from tabulate import tabulate

# list storing data
data = [
    ["Ajay", 25, "Delhi", "1234567890", 25000],
    ["Arun", 36, "Ajmer", "0987654321", 40000]
]

# print all details or filtered details
def printDetails(data=data):
    print()
    print(tabulate(data,  headers=[
          "Name", "Age", "City", "Mobile Number", "Salary"]))

# add new person detail
def addPerson():
    print("\n============  Add Person  ============")
    name = input("Enter Name : ")
    age = int(input("Enter Age : "))
    city = input("Enter City : ")
    number = input("Enter Number : ")
    salary = int(input("Enter Salary : "))
    data.append([
        name,
        age,
        city,
        number,
        salary
    ])
    print("\n============  Added Successfully  ============")
    printDetails()

# filter by city
def filterCity(city):
    filterData = [item for item in data if item[2].lower() == city.lower()]
    if len(filterData) == 0:
        print("\n======= No Record Found ======")
    else:
        printDetails(filterData)

# filter by age
def filterAge(age):
    filterData = [item for item in data if int(item[1]) >= int(
        age[0]) and int(item[1]) <= int(age[1])]
    if len(filterData) == 0:
        print("\n======= No Record Found ======")
    else:
        printDetails(filterData)

# option screen
def optFn():
    print("\n1. Add Person")
    print("2. Print Details")
    print("3. Filter By City")
    print("4. Filter By Age")
    print("5. Stop")
    n = int(input("\nEnter choice : "))
    if n == 1:
        addPerson()
    elif n == 2:
        printDetails()
    elif n == 3:
        city = str(input("Enter city : "))
        filterCity(city)
    elif n == 4:
        age = str(input("Enter age range (21-30) : "))
        age = age.split("-")
        if len(age) != 2 or age[1] == '':
            print("======= Invalid Age Range ========")
        else:
            filterAge(age)
    elif n == 5:
        exit()
    else:
        print("\n======= Invalid Option ========")
    optFn()

# main function
optFn()
```

<br/>

---

<br/>

**Ask you Questions, Doubts or Give any Suggestions in the comments down below ^\_^**

<br/>

---
