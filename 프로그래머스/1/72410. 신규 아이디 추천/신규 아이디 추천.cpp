#include <string>
#include <vector>
#include <regex>

using namespace std;

string solution(string new_id) {
    string s;
    // 1단계 알파벳 대문자를 소문자로 치환
    for(int i=0;i<new_id.length();i++) {
        s+=tolower(new_id[i]);
    }
    // 2단계 알파벳 소문자, 숫자, -_.제외한 모든 문자 제거
    // [^문자들]: 제외해야 할 문자들의 집합 정의
    s=regex_replace(s,regex("[^a-z0-9-_.]"),"");
    // 3단계 마침표(.)가 2번 이상 연속된 부분 마침표(.) 하나로 치환
    // +: 앞 패턴이 하나 이상일 때ex) \d+: 숫자가 하나 이상
    // \.+: 마침표(.) 패턴(\)이 하나 이상일 때
    s=regex_replace(s,regex("\\.+"),".");
    // 4단계 마침표(.)가 처음이나 끝에 위치한다면 제거
    // ^[.] :문자열 .으로 시작, | : 두 패턴 중 하나(OR기능), [.]$ : 문자열 .으로 종료
    s=regex_replace(s,regex("^[.]|[.]$"),"");
    // 5,6-1단계 빈 문자열이라면, 'a'를 대입하고 길이가 16자 이상이면 첫 15개만 슬라이스
    s=(s.length()==0)?"a":s.substr(0,15);
    // 6-2단계 마침표(.)가 처음이나 끝에 위치한다면 제거
    s=regex_replace(s,regex("^[.]|[.]$"),"");
    // 7단계 문자열 길이가 2자 이하라면, 마지막 문자를 길이가 3이 될 때까지 반복해서 삽입
    if(s.length()<=2) {
        for(int i=0;i<3-s.length()+1;i++) {
            s+=s.back();
        }
    }
    return s;
}