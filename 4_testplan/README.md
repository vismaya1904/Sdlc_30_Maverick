# TEST PLAN:

## Table no.1: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |user should able to see the menu|Display Menu|Display Menu|Display Menu|Requirement based |
|  H_02       |--------------------------------------------------------------|  ------------|-------------|----------------|Scenario based    |
|  H_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    | 

## Table no.2: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | User enters the right answer for encryption | Only alphabets, no spaces, right answer | CORRECT_ANSWER | CORRECT_ANSWER |Requirement based |
|  L_02       | User enters the wrong answer for encryption | Only alphabets, no spaces, wrong answer | WRONG_ANSWER | WRONG_ANSWER | Requirement based    |
|  L_03       | User enters digits/other characters too for encryption | No spaces | INVALID_INPUT | INVALID_INPUT | Requirement based    |
|  L_04      | User enters the right answer for decryption | Only alphabets, no spaces, right answer | CORRECT_ANSWER | CORRECT_ANSWER |Requirement based |
|  L_05       | User enters the wrong answer for decryption | Only alphabets, no spaces, wrong answer | WRONG_ANSWER | WRONG_ANSWER | Requirement based    |
|  L_06       | User enters digits/other characters too for decryption | No spaces | INVALID_INPUT | INVALID_INPUT | Requirement based    |



