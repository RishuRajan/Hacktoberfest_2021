#include <bits/stdc++.h>
using namespace std;

void HexToBin(string hexdec)
{
    long int  i = 0;
 
     while(hexdec[i]!='\0')
  {
 
        switch (hexdec[i]) 
    {
        case '0':
            cout << "0000";
            break;
        case '1':
            cout << "0001";
            break;
        case '2':
            cout << "0010";
            break;
        case '3':
            cout << "0011";
            break;
        case '4':
            cout << "0100";
            break;
        case '5':
            cout << "0101";
            break;
        case '6':
            cout << "0110";
            break;
        case '7':
            cout << "0111";
            break;
        case '8':
            cout << "1000";
            break;
        case '9':
            cout << "1001";
            break;
        case 'A':
        case 'a':
            cout << "1010";
            break;
        case 'B':
        case 'b':
            cout << "1011";
            break;
        case 'C':
        case 'c':
            cout << "1100";
            break;
        case 'D':
        case 'd':
            cout << "1101";
            break;
        case 'E':
        case 'e':
            cout << "1110";
            break;
        case 'F':
        case 'f':
            cout << "1111";
            break;
        default:
            cout << "\nInvalid hexadecimal digit "<< hexdec[i];
            exit(0);
        }//switch
        i++;
    }//while
}//hexa
 
int   main()
{
    char hexdec[100] ;
    cout<<"\nEnter a valid Hexadecimal numeric value:";
    cin>>hexdec;
    cout << "\nEquivalent Binary value is : ";
    HexToBin(hexdec);
    return 0;
 
    
}//main
