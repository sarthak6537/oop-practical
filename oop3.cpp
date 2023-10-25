# include<iostream>
# include<stdio.h>
using namespace std;
class publication                 // declaring class Publication
 {
 private:
 string title;
 float price;
 public:
 void add()
 {
 cout << "\nEnter the Publication information : " << endl;
 cout << "Enter Title of the Publication : ";
cin.ignore();
getline(cin, title);
cout << "Enter Price of Publication : ";
 cin >> price;
 }
 void display()
 {
 cout << "\n--------------------------------------------------";
 cout << "\nTitle of Publication : " << title;
 cout << "\nPublication Price : " << price;
 }
 };
 class book : public publication  // declaring class book which inherits class publication in public mode.
 {
 private:
 int page_count;
 public:
 void add_book()
 {
 try
 {
 add();
cout << "Enter Page Count of Book : ";
 cin >> page_count;
 if (page_count <= 0)
 {
 throw page_count;
 }
 }
 catch(...)
 {
 cout << "\nInvalid Page Count!!!";
 page_count = 0;
 }
 }
 void display_book()
 {
 display();
cout << "\nPage Count : " <<
page_count;
 cout << "\n--------------------------------------------------\n";
 }
 };
 class tape : public publication     // declaring class tape which inherits class publication in public mode
 {
 private:
 float play_time;
 public:
 void add_tape()
 {
 try
 {
 add();
cout << "Enter Play Duration of the Tape : ";
 cin >> play_time;
 if (play_time <= 0)
 throw play_time;
 }
 catch(...)
 {
 cout << "\nInvalid Play Time!!!";
 play_time = 0;
 }
 }
 void display_tape()
 {
 display();
 cout << "\nPlay Time : " <<
play_time << " min";
 cout << "\n--------------------------------------------------\n";
 }
 };
 int main()
 {
 book b1[10];            // object of class book
 tape t1[10];            // object of class tape
 int ch, b_count = 0, t_count = 0;
 do
 {
 cout << "\n* * * * * PUBLICATION DATABASE SYSTEM * * * * *";
 cout << "\n--------------------MENU-----------------------";
 cout << "\n1. Add Information to Books";
 cout << "\n2. Add Information to Tapes";
 cout << "\n3. Display Books Information";
 cout << "\n4. Display Tapes Information";
 cout << "\n5. Exit";
 cout << "\n\nEnter your choice : ";
 cin >> ch;
 switch(ch)
 {
 case 1:
 b1[b_count].add_book();
b_count++;
break;
 case 2:
 t1[t_count].add_tape();
 t_count++; 
 break;
 case 3:
 cout << "\n* * * * BOOK PUBLICATION DATABASE SYSTEM * * * *";
 for (int j=0;j < b_count;j++)
 {
 b1[j].display_book() ;
 }
 break;
 case 4:
 cout << "\n* * * * TAPE PUBLICATION DATABASE SYSTEM * * * *";
 for (int j=0;j < t_count;j++)
 {
 t1[j].display_tape();
 }
 break;
 case 5:
 exit(0);
 }
 }while (ch != 5);
 return 0;
 }
 ~$ cd Desktop
jspm@jspm-Vostro-3470:~/Desktop$ g++ oop3.cpp
jspm@jspm-Vostro-3470:~/Desktop$ ./a.out

* * * * * PUBLICATION DATABASE SYSTEM * * * * *
--------------------MENU-----------------------
1. Add Information to Books
2. Add Information to Tapes
3. Display Books Information
4. Display Tapes Information
5. Exit

Enter your choice : 1

Enter the Publication information : 
Enter Title of the Publication : daily
Enter Price of Publication : 100
Enter Page Count of Book : 124

* * * * * PUBLICATION DATABASE SYSTEM * * * * *
--------------------MENU-----------------------
1. Add Information to Books
2. Add Information to Tapes
3. Display Books Information
4. Display Tapes Information
5. Exit

Enter your choice : 2

Enter the Publication information : 
Enter Title of the Publication : weekly
Enter Price of Publication : 200
Enter Play Duration of the Tape : 150

* * * * * PUBLICATION DATABASE SYSTEM * * * * *
--------------------MENU-----------------------
1. Add Information to Books
2. Add Information to Tapes
3. Display Books Information
4. Display Tapes Information
5. Exit

Enter your choice : 3

* * * * BOOK PUBLICATION DATABASE SYSTEM * * * *
--------------------------------------------------
Title of Publication : daily
Publication Price : 100
Page Count : 124
--------------------------------------------------

* * * * * PUBLICATION DATABASE SYSTEM * * * * *
--------------------MENU-----------------------
1. Add Information to Books
2. Add Information to Tapes
3. Display Books Information
4. Display Tapes Information
5. Exit

Enter your choice : 3

* * * * BOOK PUBLICATION DATABASE SYSTEM * * * *
--------------------------------------------------
Title of Publication : daily
Publication Price : 100
Page Count : 124
--------------------------------------------------

* * * * * PUBLICATION DATABASE SYSTEM * * * * *
--------------------MENU-----------------------
1. Add Information to Books
2. Add Information to Tapes
3. Display Books Information
4. Display Tapes Information
5. Exit

Enter your choice : 3

* * * * BOOK PUBLICATION DATABASE SYSTEM * * * *
--------------------------------------------------
Title of Publication : daily
Publication Price : 100
Page Count : 124
--------------------------------------------------

* * * * * PUBLICATION DATABASE SYSTEM * * * * *
--------------------MENU-----------------------
1. Add Information to Books
2. Add Information to Tapes
3. Display Books Information
4. Display Tapes Information
5. Exit

Enter your choice : 3

* * * * BOOK PUBLICATION DATABASE SYSTEM * * * *
--------------------------------------------------
Title of Publication : daily
Publication Price : 100
Page Count : 124
--------------------------------------------------

* * * * * PUBLICATION DATABASE SYSTEM * * * * *
--------------------MENU-----------------------
1. Add Information to Books
2. Add Information to Tapes
3. Display Books Information
4. Display Tapes Information
5. Exit

Enter your choice : 4

* * * * TAPE PUBLICATION DATABASE SYSTEM * * * *
--------------------------------------------------
Title of Publication : weekly
Publication Price : 200
Play Time : 150 min
--------------------------------------------------

* * * * * PUBLICATION DATABASE SYSTEM * * * * *
--------------------MENU-----------------------
1. Add Information to Books
2. Add Information to Tapes
3. Display Books Information
4. Display Tapes Information
5. Exit

Enter your choice : 5

