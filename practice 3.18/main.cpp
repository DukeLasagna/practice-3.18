#include <iostream>

using namespace std;

int main()
{
    int times;
    int num;
    times = 1;

    cout << "How many magic do you want to see? (press -1 to quit)" << endl;
    cin >> num;

     while ( num == 0 )
    {
     cout << "Hmmmmmm......\nSounds like........\nDisrespect\n" << endl;
     cout << "How many magic do you want to see?" << endl;
     cin >> num;
    }

    cout << "N\t10*N\t100*N\t1000*N" << endl;

    while ( num != -1)
    {
        while( times <= num )
          {
             cout << times << "\t" << 10 * times << "\t" << 100 * times << "\t" << 1000 * times <<endl;
             times = times + 1;
          }

        times = 1;

        if( num == -1)
          {
           return 0;
          }

        cout << "How many magic do you want to see? (press -1 to quit)" << endl;
        cin >> num;

        while ( num == 0 )
             {
            cout << "Hmmmmmm......\nSounds like........\nDisrespect\n" << endl;
            cout << "How many magic do you want to see?" << endl;
            cin >> num;
             }

        cout << "N\t10*N\t100*N\t1000*N" << endl;

  }


    return 0;
}
