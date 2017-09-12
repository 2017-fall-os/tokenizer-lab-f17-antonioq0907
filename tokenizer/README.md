Lab 1 Tokenizer
    run: ./test
    clean: does not work

    In this lab we were assign to create a tokenizer. I accomplish to create a function that recognize a delimiter and separate a string in every delimiter.
    
    We have 5 test to check the tokenier if the tokenizer detect empy space("' '") in a string. This are th results.
    
    TEST 1: "Hello my dog's name is Darwin."
        1: Hello 
        2: my   
        3: dog 
        4: s 
        5: name 
        6: is 
        7: Darwin. 

    TEST 2: "     Hello   World!    "
        1: Hello 
        2: World! 
        3:  

    TEST 3:""
        1:  

    TEST 4:" HelloWorld"
        1:  
        2: HelloWorld 

    TEST 5:"          "
        1:  
        
    After the test we can enter a string with a limit of 100 chars, and the delmiter we want to use.
        Input :
            Enter a string: asdasdasda
            Enter delimiter: s
        Output:
            1: a 
            2: da 
            3: da 
            4: da
