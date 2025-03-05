#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]){

    int choice;
    do
    {
        cout << "1. Print the number of program arguments" << endl;
        cout << "2. Print a specific program argument" << endl;
        cout << "3. Print all program arguments" << endl;
        cout << "4. Print program arguments in reverse order" << endl;
        cin  >>  choice;

        switch (choice)
        {
        case 1:
            cout << "Number of program arguments: " << argc << endl;
            break;
        case 2:
            int index;
            cout << "Which argument would you like to see?" << endl;
            cin >> index; 
            if (index >= 0  && index < argc){
                cout << "Argument " << index << " is " << argv[index] << endl;
            } else {
                cout << "Invalid index" << endl;
            }
            break;
        case 3:
            cout << "All arguments: " << endl;
            for (int i = 0; i < argc; i++){
                cout << i << ": " << argv[i] << endl;
            }
            break;
        case 4:
        break;    
        

        default:
        cerr << "Invalid choice" << endl;
            break;
            }
        } while (choice != 4);
    

    return 0;
}
