#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

std::unordered_map<std::string, int> memo;

// 비장의 일격 시뮬레이션 함수
int simulateAttacks(std::string s, int k) {
    if (k == 0 || s.length() <= 1) {
        return s.length();
    }
    
    // 메모이제이션 키 생성
    std::string key = s + "_" + std::to_string(k);
    
    // 이미 계산된 결과가 있으면 반환
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }
    
    int minLength = s.length();
    
    // 모든 가능한 비장의 일격 조합 시도
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'X') continue;
        
        for (int j = i + 1; j < s.length(); j++) {
            if (s[i] == s[j]) {
                // 비장의 일격 실행
                std::string newS = s.substr(0, i) + s.substr(j + 1);
                
                // 다음 비장의 일격 시뮬레이션
                int result = simulateAttacks(newS, k - 1);
                minLength = std::min(minLength, result);
            }
        }
    }
    
    // 결과 저장
    memo[key] = minLength;
    return minLength;
}

int main() {
    int N, K;
    std::cin >> N >> K;
    
    std::string S;
    std::cin >> S;
    
    int result = simulateAttacks(S, K);
    std::cout << result << std::endl;
    
    return 0;
}