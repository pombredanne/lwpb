// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef __TEST1_PB2_H__
#define __TEST1_PB2_H__

#include <lwpb/lwpb.h>


// 'PhoneNumber.PhoneType' enumeration values
#define TEST_PHONENUMBER_MOBILE 0
#define TEST_PHONENUMBER_HOME 1
#define TEST_PHONENUMBER_WORK 2

extern const struct lwpb_msg_desc* lwpb_messages_test;

// Message descriptor pointers
#define test_PhoneNumber (&lwpb_messages_test[0])
#define test_Person (&lwpb_messages_test[1])
#define test_LookupResult (&lwpb_messages_test[2])
#define test_Name (&lwpb_messages_test[3])

extern const struct lwpb_field_desc* lwpb_fields_test_phonenumber;

// 'PhoneNumber' field descriptor pointers
#define test_PhoneNumber_number (&lwpb_fields_test_phonenumber[0])
#define test_PhoneNumber_type (&lwpb_fields_test_phonenumber[1])

extern const struct lwpb_field_desc* lwpb_fields_test_person;

// 'Person' field descriptor pointers
#define test_Person_name (&lwpb_fields_test_person[0])
#define test_Person_id (&lwpb_fields_test_person[1])
#define test_Person_email (&lwpb_fields_test_person[2])
#define test_Person_phone (&lwpb_fields_test_person[3])

extern const struct lwpb_field_desc* lwpb_fields_test_lookupresult;

// 'LookupResult' field descriptor pointers
#define test_LookupResult_person (&lwpb_fields_test_lookupresult[0])

extern const struct lwpb_field_desc* lwpb_fields_test_name;

// 'Name' field descriptor pointers
#define test_Name_name (&lwpb_fields_test_name[0])

#endif // __TEST1_PB2_H__