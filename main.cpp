#include <iostream>
#include<iterator>
#include <algorithm>
#include <string>
using namespace std;

 // exersize 1
bool isunique(const string& str)
{
  

    for(int i{}; i < str.size()-1; ++i)
    {
        for(int j = i + 1; j < str.size(); ++j)
        {
            if(i == j) continue;
            if(str[i] == str[j] || str[i] - 32 == str[j] || str[j] - 32 == str[i] )
            {
                return false;
            }
            
        }
    }
    return true;
}


 // exersize 2
bool ispermut(string& str1, string& str2)
{
    if(str1.size() != str2.size())
    {
        return false;
    }
    int count{};
    for(int i {}; i< str1.size()-1; ++i)
    {
        for(int j {}; j < str2.size()-1; ++j)
        {
            if(str1[i] == str2[j])
            {
                ++count;
            }
        }
    }
    if(count == str1.size())
    {
        return true;
    }
    return false;
}

 //exersize 3

string Ur(string& str)
{
  int size = str.size();
  string s = "%20";

  while(str[size-1] == ' ')
  {
      str[size-1] = '\0';
      --size;
  }

    for(auto i = str.begin(); i < str.end();++i)
    {
        if(*i == ' ')
        {
            str.replace(i,i+1,s);
        }
        
    }
    return str;
}

 //exersize 4

bool is_palim(string& str)
{
    if(str[0] == '\0')
    {
        return false;
    }

    int count{};
    int str_count = str.size()-1;

    for(int i{}; i < str.size()-1; ++i)
    {
        for(int j {i+1}; j < str.size()-1; ++j)
        {
            if(str[i] == str[j] && (str[i] != ' '))
            {
                ++count;
                cout << "count" <<  endl;
            }
        }
    }
}

 //  exersize 5

bool is_eq(string& str,string& othstr)
{
  
    
    int count{};
    int strcount = str.size();
   for(int i{}; i < str.size(); ++i)
   {
       if(str[i] == othstr[i])
       {
           ++count;
       }
   }

   if( (strcount == count) || (strcount + 1 == count) || (strcount -1 == count))
   {
       return true;
   }else{
       return false;
   }
}


//exersize 6

string compress(const string &str)
{
    string ns{};
    char last = str[0];
    unsigned count {1};
    for (int i = 1; i <= str.size(); i++) {
        if (i != str.size() && str[i] == last)
            count++;
        else {
            ns += last;
            ns.append(to_string(count));
            count = 1;
            last = str[i];
        }
    }
    if (ns.size() < str.size()) {
        return ns;
    } else {
        return str;
    }
}



//exersize 7

void rotateMatrix()
{ 
    int N = 4;

      int mat[N][N] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };
 
   
    for (int x {}; x < N / 2; ++x) {
        for (int y{x}; y < N - x - 1; ++y) {
            int temp = mat[x][y];
            mat[x][y] = mat[y][N - 1 - x];
            mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];
            mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];
            mat[N - 1 - y][x] = temp;
        }
    }
}
 

//exersize 8
void Matrix()
{ 
    int N = 3;
    int M = 4;
    

      int mat[N][M] = {
        { 1, 2, 3, 4 },
        { 5, 6, 0, 8 },
        { 6, 1, 4, 6 },
    };
 
 
    
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++){
                cout << mat[i][j] << " ";
            }
          cout << '\n';  
        }
        
   cout << "--------------------------------------------" << endl;
    for (int x {}; x < N; ++x) {
        for (int y{}; y < M; ++y) {
           static int a = 1;
           if((mat[x][y] == 0) && (a == 1) )
           {
               for(int i{}; i < N; ++i)
               {
                   mat[i][y] = 0;
                   
               }
               for(int i{}; i < M; ++i)
               {
                   mat[x][i] = 0;
                   
               }
               a = 2;
            
               
           }
        }
    }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++){
                cout << mat[i][j] << " ";
            }
          cout << '\n';  
        }
        

}


//exersize 9

bool substring(string& str,string& otherstr)
{
    cout << "c";
    if(str.size() != otherstr.size())
    {
        return false;
        cout << "a";
    }

    string tmp = str + str;
    if(tmp.find(otherstr) != string::npos)
    {
        return true;
    }


    return false;
  
}

int main()
{
  
 
    return 0;
}