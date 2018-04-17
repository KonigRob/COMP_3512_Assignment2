//#include <iostream>
//#include <queue>
//#include <functional>
//#include "Date.hpp"
//
//// custom comparison function that is a 
//// binary predicate
//bool compare(const Date& lhs, const Date& rhs)
//{
//	return lhs < rhs;
//}
//
//// a functor
//struct cmp
//{
//	bool operator()(const Date& lhs, const Date& rhs) {
//		return lhs < rhs;
//	}
//};
//
//template<typename T> void print_queue(T& q) {
//	while (!q.empty()) {
//		std::cout << q.top() << " ";
//		q.pop();
//	}
//	std::cout << '\n';
//}
//
//int main() {
//
//	try {
//		Date d(-1, -1, -1);
//	}
//	catch (std::invalid_argument e) {
//		std::cout << e.what() << std::endl;
//	}
//
//	Date today = Date::today();
//	std::cout << today << std::endl;
//
//	// Using operator<() defined in class
//	std::priority_queue<Date> dates1;
//
//	// Using custom binary predicate
//	std::priority_queue<Date, std::vector<Date>, std::function<bool(Date, Date)> > dates2{ compare };
//
//	// Using functor
//	std::priority_queue<Date, std::vector<Date>, cmp> dates3;
//
//
//	Date a{ 2018, 1, 1 };
//	Date b{ 2017, 1, 1 };
//	Date c{ 2016, 6, 30 };
//
//	dates1.push(a);
//	dates1.push(b);
//	dates1.push(c);
//	print_queue(dates1);
//
//	dates2.push(a);
//	dates2.push(b);
//	dates2.push(c);
//	print_queue(dates2);
//
//	dates3.push(a);
//	dates3.push(b);
//	dates3.push(c);
//	print_queue(dates3);
//
//	system("pause");
//
//	return 0;
//}