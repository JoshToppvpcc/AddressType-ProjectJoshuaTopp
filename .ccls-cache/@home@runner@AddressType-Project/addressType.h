#include <iostream>
#include <string>
#include <iomanip>  // for formatted output

class addressType {
private:
    std::string streetAddress;
    std::string city;
    std::string state;
    int zipcode;

public:
    // Constructor with default values
    addressType(std::string str = "", std::string ct = "", std::string st = "XX", int zip = 10000) {
        setAddress(str);   // Use the setAddress function for street
        setCity(ct);       // Use the setCity function for city
        setState(st);      // Use the setState function for state
        setZipcode(zip);   // Use the setZipcode function for ZIP code
    }

    // Setter for city
    void setCity(std::string ct) {
        city = ct;
    }

    // Setter for street address
    void setAddress(std::string str) {
        streetAddress = str;
    }

    // Setter for state with validation
    void setState(std::string st) {
        if (st.length() == 2) {
            state = st;
        } else {
            state = "XX";  // Default value if invalid
        }
    }

    // Setter for zipcode with validation
    void setZipcode(int zip) {
        if (zip >= 11111 && zip <= 99999) {
            zipcode = zip;
        } else {
            zipcode = 10000;  // Default value if invalid
        }
    }

    // Function to print the address in standard format
    void print() const {
        std::cout << streetAddress << std::endl;
        std::cout << city << ", " << state << " " << std::setw(5) << std::setfill('0') << zipcode << std::endl;
    }
};
