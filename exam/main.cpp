#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <string>

using namespace std;

class listt {
public:

    list<int> friends_list;
    list<int>::iterator it;
};

void check_list1(listt* mylist, int a, int b) {

    ifstream file;
    file.open("exam_3_friendship_test.txt");
    string line;
    int c = 0;
    int user_index = 0;
   
    while (file >> line) {
        
        int user2_id = stoi(line);

        if (b == user2_id) {

            if (user_index % 2 == 0 || user_index == 0) {

                file >> line;
                user_index = user_index + 1;
                c = stoi(line);

               // cout << c << endl;
                mylist->friends_list.push_back(c);
                    
            }

            else {

                file >> line;
                user_index = user_index + 1;

            }
            
        }
   
        user_index = user_index + 1;
        
    }

}

void check_list2(listt* mylist,int a, int b) {

    list<int> friends_list;
    list<int>::iterator it;
    list<int>::iterator it2;

    ifstream file;
    file.open("exam_3_friendship_test.txt");
    string line;
    int user_index = 0;
    int c = 0;

    while (file >> line) {

        int user2_id = stoi(line);
      
        if (b == user2_id) {

            if (user_index % 2 == 0 || user_index == 0) {

                file >> line;
                user_index = user_index + 1;
                c = stoi(line);

                if (a != c) {

                    //cout << c << endl;      
                    mylist->friends_list.push_back(c);
                  
                }
              
            }

            else {

                file >> line;
                user_index = user_index + 1;

            }


        }

        user_index = user_index + 1;

    }

}

int main() {

    listt* mylist = new listt();
    vector<int> arr;

    //reading txt file

    ifstream file;
    file.open("exam_3_friendship_test.txt");
    string line;


    if (file.fail()) {
        cout << "Unable to open file for reading." << endl;
        exit(1);
    }

    //getting the id from the user 

    int id;

    cout << "Enter a user id to suggest some friends:";
    cin >> id;

    int count = 0; // checking the endered id is in the file
    int user_index = 0; //checking user1 or user2
    int tmp;
    int i=0;

    while (file >> line) {

        //cout << "Token: " << line << endl;

        int user_id = stoi(line);
        int a, b, c;     
        b = stoi(line);

        if (id == user_id) {

            count = count + 1;

            //If user_index is in the first column, it means even index. (the index initial id is 0.)
            if (user_index % 2 == 0 || user_index == 0) { 
                a = id;
                file >> line;
                user_index = user_index + 1;
                b = stoi(line);
             
                check_list1(mylist,a,b);//checks and lists who is b's friends.
             
            }

            else {

                a = id;
                check_list2(mylist,a,tmp); //If b is in the first column, it checks and lists b's friends.

                file >> line;
                user_index = user_index + 1;

            }
           
        }

        tmp = b;
       user_index = user_index + 1;       

    }

    if(count == 0){
        cout << "There is no such user." << endl;
    }

    mylist->friends_list.sort();
    for (mylist->it = mylist->friends_list.begin(); mylist->it != mylist->friends_list.end(); ++mylist->it) {
      
        arr.push_back(*mylist->it);
            
    }
    
    for (auto x : arr) {

        for (auto y : arr) {
            if (x == y) {
                break;
            }
        }
        cout << x << ",";
    }
    
 
    if (mylist->friends_list.empty() && count > 0) {
        cout << "There is no friend to suggest." << endl;
    }
    return 0;
}
