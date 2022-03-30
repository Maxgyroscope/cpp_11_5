#include <iostream>
#include <string>
using namespace std;
string encrypt_caesar(string str_enc,int n)
{ bool flag = false;
    for (int i =0;i<=str_enc.length();i++)
    {
        flag = true;
        int k=n*5;
        if ((str_enc[i]>='A'&&str_enc[i]<='Z')||(str_enc[i]>='a'&&str_enc[i]<='z')){
            str_enc[i]+=k;
            if (str_enc[i]>90&&str_enc[i]<97&&n>0)
            {
                str_enc[i]='A'+(str_enc[i]-91);
            }
            else if (str_enc[i]>122&&n>0)
            {
                str_enc[i]='a'+(str_enc[i]-123);
            }
            else if(str_enc[i]<'A'&&n<0)
            {
                str_enc[i]='Z'-(64-str_enc[i]);
            }
            else if(str_enc[i]<97&&str_enc[i]>90&&n<0)
            {
                str_enc[i]='z'-(96-str_enc[i]);
            }
        }
        else{
        }
    }
    return str_enc;
}

int main() {
    setlocale(0,"RUS");
    string str,str_out,decrypt_caesar;
    int n = 1;
    cout << "Введите слово:" << endl;
    getline(cin,str);
    str_out=encrypt_caesar(str,n);
    cout<<"Зашифровано:\n"<< str_out<< endl;
    n =-1;
    decrypt_caesar=encrypt_caesar(str_out,n);
    cout<<"Расшифровано:\n"<< decrypt_caesar<< endl;
    return 0;
}