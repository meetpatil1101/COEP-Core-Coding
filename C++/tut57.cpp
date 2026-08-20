#include <iostream>
#include <string>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0 ;    
};
class CWHVideo : public CWH
{
protected:
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display() override
    {
        cout << " The title of video is : " << title << endl
             << " The length of video is : " << videolength << endl
             << " Rating : " << rating << " out of 5 stars" << endl;
    }
};
class CWHText : public CWH
{
protected:
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display() override
    {
        cout << " The title of text is : " << title << endl
             << " Number of words in text : " << words << " words" << endl
             << " Rating : " << rating << " out of 5 stars" << endl;
    }
};

int main()
{
    string title;
    float videolength, rating;
    int words;
    title = "C++ Course CWH";
    rating = 5;
    videolength = 28.34;
    words = 1200;
    CWHVideo courseVideo(title, rating, videolength);
    CWHText courseText(title, rating, words);
    CWH *tuts[2];
    tuts[0] = &courseVideo;
    tuts[1] = &courseText;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}