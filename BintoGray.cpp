#include <bits/stdc++.h>
using namespace std;
 
char xor_c(char a, char b) { return (a == b) ? '0' : '1'; }
char flip(char c) { return (c == '0') ? '1' : '0'; }

string binarytoGray(string binary)
{
    string gray = "";
 
    
    gray += binary[0];
 
    
    for (int i = 1; i < binary.length(); i++) {
        
        gray += xor_c(binary[i - 1], binary[i]);
    }
 
    return gray;
}
 


//string graytoBinary(string gray)
//{
  //  string binary = "";
 
    // MSB of binary code is same as gray code
    //binary += gray[0];
 
    // Compute remaining bits
   // for (int i = 1; i < gray.length(); i++) {
        // If current bit is 0, concatenate
        // previous bit
     //   if (gray[i] == '0')
       //     binary += binary[i - 1];
 
        // Else, concatenate invert of
        // previous bit
        //else
          //  binary += flip(binary[i - 1]);
    //}
 
    //return binary;
//}
 

int main()
{
    int t;
    cin >> t;
    while (t--) {
    	string a;
    	cin >> a;
    	cout << binarytoGray(a) << endl;
	}

}
