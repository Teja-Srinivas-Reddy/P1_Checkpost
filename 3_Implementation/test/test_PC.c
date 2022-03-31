#include "unity.h"

#include "methodfunction.h"
#include "user.h"





/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}




/* Prototypes for all the test functions */


void test_check(void){
        
        char sum='bike';
  	TEST_ASSERT_EQUAL(20,check(sum));
      
}




int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_check);

return UNITY_END();
}
