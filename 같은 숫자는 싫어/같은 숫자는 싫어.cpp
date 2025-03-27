// 프로그래머스 같은 숫자는 싫어 문제
/* 
    연속으로 중복된 문자를 삭제해주면되는 문제.
    vector에 수를 넣으면서 이전의 숫자와비교해서 처리하였는데 문제는 풀었지만 다른 사람의 풀이를 보니 배울점이 있었다.
    iterator를 사용하여 vector의 erase() 멤버 함수 와 unique를 조합하여 unique를 사용하여 연속으로 오는 숫자의 를 삭제한 후 남은 벡터의 뒷 위치를 반환해주고 erase로 지워주는 좋은 방법.
    arr.erase(unique(arr.begin(), arr.end()),arr.end());
    */

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0)
            answer.push_back(arr[i]);
        else
        {
            if (arr[i] != answer[answer.size() - 1])
            {
                answer.push_back(arr[i]);
            }
        }

    }

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "heelo" << endl;


    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}

