 #include <vector>
class MyCalendar {
private:
 std::vector<std::pair<int, int>> bookings; // Store start and end times as pairs
public:
 MyCalendar() {
 }
 bool book(int start, int end) {
 for (const auto& booking : bookings) {
 if (std::max(booking.first, start) < std::min(booking.second, end)) 
 //booking.first is the start time of the existing booking.
 //booking.second is the end time of the existing booking.
 //The std::max function is used to find the later start time, and 
 //the std::min function is used to find the earlier end time.
 //If std::max(booking.first, start) < std::min(booking.second, end) evaluates to true, 
 //it means there is an overlap between the existing booking and the new booking. 
 //In this case, the method returns false, indicating that the booking cannot be made.
 {
 return false; // Overlap detected
 }
 }
 bookings.emplace_back(start, end); // Add new booking
 return true; // Booking successful
 }
};
/* With Parameterised constructor 
#include <vector>
#include <utility> // For std::pair
#include <algorithm> // For std::max and std::min
#include <iostream> // For std::cout and std::endl
class MyCalendar {
private:
 std::vector<std::pair<int, int>> bookings; // Store start and end times as pairs.
public:
 // Constructor with initial bookings
 MyCalendar(const std::vector<std::pair<int, int>>& initialBookings) 
 : bookings(initialBookings) {
 }
 bool book(int start, int end) {
 for (const auto& booking : bookings) {
 if (std::max(booking.first, start) < std::min(booking.second, end)) {
 return false; // Overlap detected
 }
 }
 bookings.emplace_back(start, end); // Add new booking
 return true; // Booking successful
 }
};
int main() {
 // Initial bookings
 std::vector<std::pair<int, int>> initialBookings = {{10, 20}, {30, 40}};
 // Create MyCalendar object with initial bookings
 MyCalendar myCalendar(initialBookings);
 // Try to book new intervals and print the results
 bool result1 = myCalendar.book(15, 25); // Should return false (overlap with {10, 20})
 bool result2 = myCalendar.book(25, 30); // Should return true (no overlap)
 bool result3 = myCalendar.book(40, 50); // Should return true (no overlap)
 
 // Print the results
 std::cout << "Booking (15, 25): " << (result1 ? "Success" : "Failed") << std::endl;
 std::cout << "Booking (25, 30): " << (result2 ? "Success" : "Failed") << std::endl;
 std::cout << "Booking (40, 50): " << (result3 ? "Success" : "Failed") << std::endl;
 return 0;
} 
 