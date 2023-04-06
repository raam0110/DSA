#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<time.h>

using namespace std;
//for printing the main message box
void message(string message,bool top = true,bool bottom = true)
{
    if(top)cout<<"<----------------------------------->"<<endl;
    cout<<"|";
    bool front = true;
    for(int i = message.length();i<35;i++)
    {
        if(front)message = " " + message;
        else message = message +" ";
        front = !front;
    }
    cout<<message.c_str();
    cout<<"|"<<endl;
    if(bottom)cout<<"<----------------------------------->"<<endl;
}
//for drawing the main sketch of the HANGMAN

void sketch(int guess = 0)
{
    if(guess>=1) message("|",false,false);
    else message("",false,false);
    if(guess>=2) message("|",false,false);
    else message("",false,false);
    if(guess>=3) message("O",false,false);
    else message("",false,false);
    if(guess == 4) message("/| ",false,false);
    if(guess == 5) message("|\\",false,false);    
    if(guess>=6) message("/|\\",false,false);
    else message("",false,false);    
    if(guess>=7) message("|",false,false);
    else message("",false,false);    
    if(guess==8) message("/",false,false);   
    if(guess>=9) message("/ \\",false,false);
    else message("",false,false);    
}

void letters(string input,char f,char t)
{
    string s;
    for(char c = f; c<=t; c++)
    {
        if(input.find(tolower(c)) == string::npos)
        {
            s += c;
            s += " ";
        }
        else 
            s+=" " ;
    } 
    message(s,false,false);
}

void avail(string taken)
{
    message("AVAILABLE LETTERS",true,true);
    letters(taken,'A','M');
    letters(taken,'N','Z');
}

bool checkwin(string word,string guess)
{
    bool won =true;
    string s;
    for(int i=0;i<word.length();i++)
    {
        if(guess.find(word[i]) == string::npos)
        {
            won = false;
            s+="_ ";
        }
        else
        {
            s += word[i];
            s += " ";
        }
    }
    message(s,false);
    return won;
}

string rword(string path)
{
    int linecount = 0;
    string word;
    vector<string> v;
    ifstream reader(path);
    if(reader.is_open())
    {
        while(getline(reader,word))v.push_back(word);

        int rindex = rand() % v.size(); // for selecting a word from the file
        word = v.at(rindex);
    }
    return word;

}

int tries(string word,string guessed)
{
    int error = 0;
    for(int i=0;i<guessed.length();i++)
    {
        if(word.find(guessed[i]) == string::npos)
        error++;
    }
    return error;
}

int main()
{   
    srand(time(0));
    string guesses;
    string wordtoguess;
    wordtoguess = rword("words.txt");
    int attempts =0;
    bool win = false;

    do
    {
        system("cls");
        message("HANGMAN");
        sketch(attempts);
        avail(guesses);
        if(attempts == 9)
        {
            message("YOU LOST");
            break;
        }
        message("GUESS THE WORD");
        win = checkwin(wordtoguess,guesses);

        if(win)
        {
            message("YOU WON");
            break;
        }

        char x;
        cout<<">";cin>>x;
        if(guesses.find(x) == string::npos)
        {
            guesses+=x;
        }
        attempts = tries(wordtoguess,guesses);
    } while (attempts <= 9);
    

    getchar();
    return 0;
}