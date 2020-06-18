#include <iostream>
#include <bits/stdc++.h>


using namespace std;
char command[100];

int main(){

  int number=1;
 cout<<"Welcome\nPlease, choose a number\n";
 cout<<"0-To exit\n1-Add a user\n2-Delete a user\n3-Add a group\n4-Delete a group\n5-Assign specific user to specific group\n6-change username of a user\n7-change id of a user\n8-change password expiration of a user\n9-change password of a user\n10-change your password\n11-change user primary group\n12-Program manual\n";
  while(cin>>number)
{
    
     if(number==1)
     {
         char username[30];
         cout<<"Please enter username\n";
         cin>>username;
         strcpy(command,"sudo adduser ");
         strcat(command,username);
         system(command);

     }else if(number==2)
     {
         char username[30];
         cout<<"Please enter username\n";
         cin>>username;
         strcpy(command,"sudo deluser ");
         strcat(command,username);
         system(command);

    }else if(number==3)
    {
         char groupname[50];
         cout<<"Please enter group name\n";
         cin>>groupname;
         strcpy(command,"sudo groupadd ");
         strcat(command,groupname);
         system(command);

    }else if(number==4)
    {
         char groupname[50];
         cout<<"Please enter group name\n";
         cin>>groupname;
         strcpy(command,"sudo groupdel ");
         strcat(command,groupname);
         system(command);

    }else if(number==5)
    {
         char groupname[50],username[30];
         cout<<"Please enter user name of the user and group name\n";
         cin>>username>>groupname;
         strcpy(command,"sudo adduser ");
         strcat(command,username);
         strcat(command," ");
         strcat(command,groupname);
         system(command);

    }else if(number==6)
    {
         char newusername[30],oldusername[30];
         cout<<"Please enter new user name and current user name of the user\n";
         cin>>newusername>>oldusername;
         strcpy(command,"sudo usermod -l ");
         strcat(command,newusername);
         strcat(command," ");
         strcat(command,oldusername);
         system(command);

    }else if(number==7)
    {
         char username[30];
         char Id[10];
         cout<<"Please enter user name and new ID of the user\n";
         cin>>username>>Id;
         strcpy(command,"sudo usermod -u ");
         strcat(command,Id);
         strcat(command," ");
         strcat(command,username);
         system(command);

    }else if(number==8)
    {
         char username[30];
         char days[10];
         cout<<"Please enter user name and number of days in which password will be valid\n";
         cin>>username>>days;
         strcpy(command,"sudo chage -M ");
         strcat(command,days);
         strcat(command," ");
         strcat(command,username);
         system(command);


    }else if(number==9)
    {
         char username[30];
         cout<<"Please enter user name of the user\n";
         cin>>username;
         strcpy(command,"sudo passwd ");
         strcat(command,username);
         system(command);
     
    }else if(number==10)
    {
         strcpy(command,"passwd");
         system(command);
     
    }else if(number==11)
    {
         char groupname[50],username[30];
         cout<<"Please enter user name of the user and group name\n";
         cin>>username>>groupname;
         strcpy(command,"sudo usermod -g ");
         strcat(command,groupname);
         strcat(command," ");
         strcat(command,username);
         system(command);
     
    }else if(number==12)
    {
         system("man -l manual");
     
    }else if(number==0)
    {
         break;
    }else
    {
        cout<<"Please enter valid number\n";
    }
 cout<<"\n\n Welcome\nPlease, choose a number\n0-To exit\n1-Add a user\n2-Delete a user\n3-Add a group\n4-Delete a group\n5-Assign specific user to specific group\n6-change user name of a user\n7-change id of a user\n8-change password expiration of a user\n9-change password of a user\n10-change your password\n11-change user primary group\n12-Program manual\n\n";
}
  
  return 0;
}
