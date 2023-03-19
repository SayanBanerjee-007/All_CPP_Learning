#include <iostream>
#include <cstring>

using namespace std;
class CWS
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
    virtual void display(void) { cout << "FUCK" << endl; }
};
class CWS_video : public CWS
{
    float video_length;

public:
    CWS_video(string str, float r, float video_length) : CWS(str, r)
    {
        this->video_length = video_length;
    }
    void display(void)
    {                                                                                        // If this function is not
        cout << "This is an amazing video tutorial with title " << title << endl;            // created , then the base
        cout << "Rating of this video tutorial is: " << rating << " out of 5 stars." << endl;// class display will
        cout << "Length of this video tutorial is: " << video_length << " minutes." << endl; // execute.
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
/*
 Rules for virtual function
 1. They cannot be static.
 2. They are accessed by object pointers.
 3. Virtual function can be a friend of another class.
 4. A virtual function in base class might not be used.
 5. A virtual function which is defined in the base class, there is no necessity of redefining it in the derived class.
*/
