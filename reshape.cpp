// Example program
#include <iostream>
#include <string>
#include <algorithm>

std::string reshape(int n,std::string str)
{
     /*
    Statement
    The reshape(n, str) method should return the string str without spaces and layed out in lines of at most n characters.
    Examples:
    reshape(3, "abc de fghij") => returns "abc\ndef\nghi\nj"
    reshape(6, "1 23 456") => returns "123456"
    */

    str.erase(std::remove(str.begin(),str.end(),' '),str.end());
     std::string sr;

    size_t d=str.length();
    if(n==str.length())
    {  sr=str;
        std::cout<<sr;
    }

    for(auto i=1;i<str.length();++i)
    {
        if((i%n==0)&&(d>n))

        {   d-=n;
            sr.append(str,i-n,n);


            std::cout<<sr<<"\\n";
            sr.clear();
            if (d==1)
            {
            sr.append(str,str.length()-1,d);


            std::cout<<sr;
            sr.clear();
            }
             if (d==n)
            {
            sr.append(str,str.length()-n,n);


            std::cout<<sr;
            sr.clear();
            }

        }

        else if((d<n)&&(d>0))
        {

         sr.append(str,str.length()-d,d);
         std::cout<<sr;
         d=0;

        }


    }
return sr;

}
int main()
{
reshape(10,"abc de fghij");
reshape(6,"1 23 456");

}
