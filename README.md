last update: 1/16/2022 10:45pm

**DOH Metro Manila Hospital Locator & Registration**
- i narrowed it down to DOH metro manila hospitals para easier :>

**Hospital list stored in a csv file**
- hospital name, city, full address, contact number

progress:
- [DONE] encoded every city on the csv file
  - list from here: https://doh.gov.ph/doh-hospitals-directory
  - 20 hospitals lang from metro manila thooo idk if it's enough huhu
  - didn't include the contact number cuz iba-iba format 

**Patient registration/information stored in a structure**
- last name, first name, age, sex, contact number, address, chosen hospital 

progress:
- [DONE] structure for patient's info
- [DONE] program only accepts M or F for patient's sex
- [DONE] program will only accept a contact number that is 11 digits long, starts with 09, and follows the format (09**-***-****)
- haven't prepared a code for patient's chosen hospital (info.hospital) since baka magka conflict if we have the csv file na

**Original Program Flow:**
1. Input city
    - Input or choose? I think easier if choose (a, b, c .....) but mas complicated if input mismo hehe but case sensitive lang kaso.
2. Show all hospitals from the city
3. User will choose which hospital
4. Program will ask how many patients (N) will they admit in
5. Program will then ask for (N) basic information 
6. Program will show everything (hospital name, city, and N patient information)
7. End

**[TENTATIVE] Program flow as of now:**
1. Choose city from the presented choices (Manila, Makati, Quezon)
2. Program will ask if user will register patient info
3. Program will ask for patient's info
  - for ONE patient pa lang
4. Program will present patient's info (without chosen hospital pa)
5. End

**To do:**
1. code to open and read the csv file
2. user will be able to choose a hospital
3. user will be able to input N records (patient's info)
4. store patient's chosen hospital in the data structure

**optional:**
1. make it more complicated (??) idk if ok na itong code natin huhu maybe it's too /simple/ for sir's standards chz

**suggestion**
1. User login at the start of the program
  - username (or email?) and password will be stored in a csv file 
  - we'll be asking for one patient basic info lang (not N na, since idt may sense if we ask for N info since user login naman)
