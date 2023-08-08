// Data type refers to the type of value a variable has and the way the computer interprets it.


// Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:
// Integer: 4 bytes
// Long: 8 bytes
// Float: 4 bytes
// Double: 8 bytes
// Character: 1 byte




/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

int dataTypes(string type) {

    // Checking 'type' with all the data types we know.

    if (type == "Integer")
        return 4;
    else if (type == "Long")
        return 8;
    else if (type == "Float")
        return 4;
    else if (type == "Double")
        return 8;
    else if (type == "Character")
        return 1;
    else // 'type' should have matched with some data type above
        return -1; // Should not be returned
}