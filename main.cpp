#include <iostream>

using namespace std;

void lesson1(int month,int day)
{
    cout<<"BEGIN:VEVENT"<<endl;
    cout<<"DTSTART:20180" <<month;
    if(day<10)
        cout<<"0"<<day;
    else
        cout<<day;
    cout<<"T080000"<<endl;
    cout<<"DTEND:20180" <<month;
    if(day<10)
        cout<<"0"<<day;
    else
        cout<<day;
    cout<<"T093500"<<endl;
}
void lesson2(int month,int day)
{
    cout<<"BEGIN:VEVENT"<<endl;
    cout<<"DTSTART:20180" <<month;
    if(day<10)
        cout<<"0"<<day;
    else
        cout<<day;
    cout<<"T100500"<<endl;
    cout<<"DTEND:20180" <<month;
    if(day<10)
        cout<<"0"<<day;
    else
        cout<<day;
    cout<<"T114000"<<endl;
}
void lesson3(int month,int day)
{
    cout<<"BEGIN:VEVENT"<<endl;
    cout<<"DTSTART:20180" <<month;
    if(day<10)
        cout<<"0"<<day;
    else
        cout<<day;
    cout<<"T143000"<<endl;
    cout<<"DTEND:20180" <<month;
    if(day<10)
        cout<<"0"<<day;
    else
        cout<<day;
    cout<<"T160500"<<endl;
}
void lesson5(int month,int day)
{
    cout<<"BEGIN:VEVENT"<<endl;
    cout<<"DTSTART:20180" <<month;
    if(day<10)
        cout<<"0"<<day;
    else
        cout<<day;
    cout<<"T193000"<<endl;
    cout<<"DTEND:20180" <<month;
    if(day<10)
        cout<<"0"<<day;
    else
        cout<<day;
    cout<<"T210500"<<endl;
}
void Monday()
{
    int month=3,day=5;
    int week=1;
       day=5+(week-1)*7;
       if (month== 3 && day> 31) {month= 4; day= day- 31; }
       if (month== 4 && day> 30) {month= 5; day= day- 30; }
       if (month== 5 && day> 31) {month= 6; day= day- 31; }
       if (month== 6 && day> 30) {month= 7; day= day- 30; }
    if(week<11)
        {
         lesson1(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:��ѧӢ��"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson2(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�����߼�"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson3(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�ߵ���ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson5(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:��ѧ����������"<<endl;
         cout<<"END:VEVENT"<<endl;
        }

     if(week>10&&week<16)
     {
         lesson1(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:��ѧӢ��"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson3(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�ߵ���ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
     }
     if(week>15&&week<19)
     {
         lesson3(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�ߵ���ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
     }

}
void Tuesday()
{
   int month=3,day=6;
    int week=1;
       day=6+(week-1)*7;
       if (month== 3 && day> 31) {month= 4; day= day- 31; }
       if (month== 4 && day> 30) {month= 5; day= day- 30; }
       if (month== 5 && day> 31) {month= 6; day= day- 31; }
       if (month== 6 && day> 30) {month= 7; day= day- 30; }
    if(week<11)
        {
         lesson1(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�繤����Ӽ���"<<endl;
         cout<<"END:VEVENT"<<endl;
        }
    if(week>4&&week<11)
       {
         lesson3(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:��ɢ��ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
       }
    if(week<9)
       {
         lesson5(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�����ѧ����"<<endl;
         cout<<"END:VEVENT"<<endl;
       }
}
void Wednesday()
{
    int month=3,day=7;
    int week=1;
       day=7+(week-1)*7;
       if (month== 3 && day> 31) {month= 4; day= day- 31; }
       if (month== 4 && day> 30) {month= 5; day= day- 30; }
       if (month== 5 && day> 31) {month= 6; day= day- 31; }
       if (month== 6 && day> 30) {month= 7; day= day- 30; }
    if(week<11)
        {
         lesson1(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�ߵ���ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson2(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:��ë����߰�"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson3(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�����߼�"<<endl;
         cout<<"END:VEVENT"<<endl;
        }

     if(10<week&&week<18)
       {
         lesson1(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�ߵ���ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson2(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:��ë����߰�"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson3(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�߼������̼���"<<endl;
         cout<<"END:VEVENT"<<endl;
       }
}
void Thursday()
{
    int month=3,day=8;
    int week=1;
       day=8+(week-1)*7;
       if (month== 3 && day> 31) {month= 4; day= day- 31; }
       if (month== 4 && day> 30) {month= 5; day= day- 30; }
       if (month== 5 && day> 31) {month= 6; day= day- 31; }
       if (month== 6 && day> 30) {month= 7; day= day- 30; }
     if(week<11)
        {
         lesson1(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�繤����Ӽ���"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson2(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:��ѧӢ��"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson5(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�����ѧ����"<<endl;
         cout<<"END:VEVENT"<<endl;
        }
    if(week>10&&week<15)
       {
         lesson1(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:��ѧӢ��"<<endl;
         cout<<"END:VEVENT"<<endl;
       }
 }
void Friday()
{
    int month=3,day=9;
    int week=1;
       day=9+(week-1)*7;
       if (month== 3 && day> 31) {month= 4; day= day- 31; }
       if (month== 4 && day> 30) {month= 5; day= day- 30; }
       if (month== 5 && day> 31) {month= 6; day= day- 31; }
       if (month== 6 && day> 30) {month= 7; day= day- 30; }
    if(week<5)
       {
         lesson3(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�ߵ���ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
       }
    if(4<week&&week<11)
        {
         lesson1(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:��ɢ��ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson3(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�ߵ���ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
        }
    if(week>10&&week<18)
       {
         lesson1(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:��ɢ��ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson2(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�߼������̼���"<<endl;
         cout<<"END:VEVENT"<<endl;
         lesson3(month,day);
         cout<<"BEGIN:VEVENT"<<endl;
         cout<<"SUMMARY:�ߵ���ѧ"<<endl;
         cout<<"END:VEVENT"<<endl;
       }
}
int main()
{
    int week=1;

    cout<<"BEGIN:VCALENDAR"<<endl;
    cout<<"PRODID:"<<endl;
    cout<<"VERSION:2.0"<<endl;
    cout<<"CALSCALE:GREGORIAN"<<endl;
    cout<<"METHOD:PUBLISH"<<endl;
    for(week=1;week<19;week++)
     {
         Monday();
         Tuesday();
         Wednesday();
         Thursday();
         Friday();
     }
    cout<<"END:VCALENDAR"<<endl;
    return 0;
}
