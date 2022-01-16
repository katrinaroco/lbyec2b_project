last update: 1/16/2022 10:45pm

**DOH Metro Manila Hospital Locator & Registration**
- i narrowed it down to DOH metro manila hospitals para easier :>

**Hospital list stored in a csv file**
- hospital name, city, full address, contact number

progress:
- not yet done, haven't typed every city in the program
  - i think let's source the list from here na lang: https://doh.gov.ph/doh-hospitals-directory
- haven't started on the csv file since idk if it'll work on dev c++
- i tried using visual code but it's not working T^T i've been trying to figure it out for 2 days na HAHAHHA i kinda give up na tbh (i installed some extensions na but my makefile is diff from youtube T___T)
link: https://www.youtube.com/watch?v=ZSlUc8Y1Ai0&t=159s

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
  - for ONE patient only
4. Program will present patient's info (without chosen hospital pa)
5. End

**To do:**
1. csv file
2. user will be able to choose a hospital
3. user will be able to input N records (patient's info)
4. show patient's chosen hospital at the end of the program

**optional:**
1. make it more complicated (??) idk if ok na itong code natin huhu maybe it's too /simple/ for sir's standards chz
