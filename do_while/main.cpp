#include <iostream>

int main()
{
    char selection {};
    do {
        cout << "\n ----------"<<endl;
        cout << "1. do this"<endl;
        cout << "2. do that"<endl;
        cout << "3. Something else"<endl;
        cout <<"\n Enter your selection";
        cin >> selection;
        if (selection =='1')
            cout <<"You choose 1 - doing this" << endl;
            else if (selection ==2)
                cout <<"You choose 2 - doing that dummy" << endl;
    }      else if (selection ==2)
                cout <<"You choose 3 - doing something else NIGGA dummy" << endl;
         else if (selection =='q' || selection == 'Q')
                cout <<"You choose q - Good bye DUMMY!!" << endl;
    else
        cout << "Unknown option --- What a dumb ass!!"<<endl;
} while (selection !='q'||'Q');
    return 0;
}