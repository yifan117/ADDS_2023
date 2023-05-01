#include "BigNumCalc.h"

#include <string>
#include <list>

BigNumCalc::BigNumCalc() {};
BigNumCalc::~BigNumCalc() {};

std::list<int> BigNumCalc::get_num() {
    return this->bigNum;
}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> num;

    for (int i = 0; i < numString.length(); i++) {
        num.emplace_back(numString[i] - '0');
    }

    this->bigNum = num;

    return num;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> ans;
    int carry = 0;

    auto list1 = num1.rbegin();
    auto list2 = num2.rbegin();

    while (list1 != num1.rend() && list2 != num2.rend()) {
        int list1_num = *list1;
        int list2_num = *list2;

        int sum = list1_num + list2_num + carry;

        ans.emplace_front(sum % 10);
        carry = sum / 10;

        list1++;
        list2++;
    }

    while (list1 != num1.rend()) {
        int list1_num = *list1;
        int sum = list1_num;
        sum += carry;

        ans.emplace_front(sum % 10);

        carry = sum / 10;
        list1++;
    }

    while (list2 != num2.rend()) {
        int list2_num = *list2;
        int sum = list2_num + carry;

        ans.emplace_front(sum % 10);

        carry = sum / 10;
        list2++;
    }

    if (carry != 0) {
        ans.emplace_front(carry);
    }
    
    this->bigNum = ans;

    return ans;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> ans;
    int carry = 0;

    auto list1 = num1.rbegin();
    auto list2 = num2.rbegin();

    if (num1.size() < num2.size()) {
        num1.insert(num1.begin(), num2.size() - num1.size(), 0);
    } else if (num1.size() > num2.size()) {
        num2.insert(num2.begin(), num1.size() - num2.size(), 0);
    }

    for (; list1 != num1.rend(); list1++, list2++) {
        int total = *list1 - *list2;
        total -= carry;

        if (total < 0) {
            total += 10;
            carry = 1;
        } else {
            carry = 0;
        }

        ans.emplace_front(total);
    }

    while (!ans.empty() && ans.front() == 0) {
        ans.pop_front();
    }

    if (ans.empty()) {
        ans.emplace_front(0);
    }

    this->bigNum = ans;

    return ans;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {

    if (num2.front() == 1) return num1;

    std::list<int> ans;

    if (num2.front() == 0) {
        ans.emplace_front(0);
        return ans;
    }

    int carry = 0;

    auto list1 = num1.rbegin();

    for (; list1 != num1.rend(); ++list1) {
        int total = (*list1 * num2.front());
        total += carry;

        ans.emplace_front(total % 10);
        carry = total / 10;
    }

    if (carry != 0) {
        ans.emplace_front(carry);
    }
    
    return ans;
}
