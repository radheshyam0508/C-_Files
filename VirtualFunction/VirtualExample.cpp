#include <iostream>
#include <cstring>
using namespace std;

class CWR
{

protected:
    string title;
    float Rating;

public:
    CWR(string s, float r)
    {
        title = s;
        Rating = r;
    }
    virtual void display() {}
};

class CWRVideo : public CWR
{
    float VideoLength;

public:
    CWRVideo(string s, float r, float vl) : CWR(s, r)
    {

        VideoLength = vl;
    }
    void display()
    {

        cout << "This is a really amazing video and the title of the video tutorial is " << title << endl;
        cout << "The Length of the video tutorial is " << VideoLength << " minutes" << endl;
        cout << "The rating of the video is " << Rating << " out of 5 star" << endl;
    }
};

class CWRText : public CWR
{
    float wordscount;

public:
    CWRText(string s, float r, float wc) : CWR(s, r)
    {

        wordscount = wc;
    }
    void display()
    {

        cout << "This is a really amazing documents and the title of the tutorial is " << title << endl;
        cout << "The Length of the tutorial is " << wordscount << endl;
        cout << "The rating of the video is " << Rating << " out of 5 star" << endl;
    }
};

int main()
{
    string title;

    float rating, vlen;

    int words;

    //code for CWR

    title = "Live your Dreams, Listen to your Heart";
    vlen = 11.56;
    rating = 4.99;

    CWRVideo objVideo(title, rating, vlen);
    //objVideo.display();

    //code for Text
    title = "Have petions and faith in GOD";

    words = 66666;
    rating = 5.00;

    CWRText objText(title, rating, words);
    //objText.display();

    //diplay the output using pointer

    CWR *ptr[2];
    ptr[0] = &objVideo;
    ptr[1] = &objText;

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}