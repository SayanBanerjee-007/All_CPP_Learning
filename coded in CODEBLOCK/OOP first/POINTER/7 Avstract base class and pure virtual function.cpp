#include <iostream>
#include <cstring>

using namespace std;
class CWS // Abstract Base class which is created sepocificly for creating another derived classes.
{
protected:
    string title;
    float rating;

public:
    CWS(string str, float r)
    {
        title = str;
        rating = r;
    }
    virtual void display(void) = 0; // do nothing function --> Pure virtual function.
};
class CWS_video : public CWS
{
    float video_length;

public:
    CWS_video(string str, float r, float video_length) : CWS(str, r)
    {
        this->video_length = video_length;
    }
    void display(void) // If this display function is not defined ,the programme will throw error.
    {
        cout << "This is an amazing video tutorial with title " << title << endl;
        cout << "Rating of this video tutorial is: " << rating << " out of 5 stars." << endl;
        cout << "Length of this video tutorial is: " << video_length << " minutes." << endl;
    }
};
class CWS_text : public CWS
{
    int word_length;

public:
    CWS_text(string str, float r, int word_length) : CWS(str, r)
    {
        this->word_length = word_length;
    }
    void display(void)
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Rating of this text tutorial is: " << rating << " out of 5 stars." << endl;
        cout << "Numbers of words in this text tutorial is: " << word_length << " words." << endl;
    }
};
int main()
{
    string title = "WTF";
    float rating_video = 4.5, rating_text = 4.23, video_length = 12.3;
    int word_length = 247;

    CWS_video video_obj(title, rating_video, video_length);
    //video_obj.display();

    CWS_text text_obj(title, rating_text, word_length);
    //text_obj.display();

    CWS *ptr[2];
    ptr[0] = &video_obj; //(title, rating, video_length);
    ptr[1] = &text_obj;  //(title, rating, word_length);

    ptr[0]->display();
    ptr[1]->display();

    cout << endl;
    return 0;
}

