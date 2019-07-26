// -*- C++ -*-
/*!
 * @file  testRTC5Test.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "testRTC5Test.h"

// Module specification
// <rtc-template block="module_spec">
static const char* testrtc5_spec[] =
  {
    "implementation_id", "testRTC5Test",
    "type_name",         "testRTC5Test",
    "description",       "ModuleDescription",
    "version",           "1.0.0",
    "vendor",            "VenderName",
    "category",          "Category",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
testRTC5Test::testRTC5Test(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
testRTC5Test::~testRTC5Test()
{
}



RTC::ReturnCode_t testRTC5Test::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t testRTC5Test::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testRTC5Test::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testRTC5Test::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testRTC5Test::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testRTC5Test::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testRTC5Test::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testRTC5Test::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testRTC5Test::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testRTC5Test::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testRTC5Test::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t testRTC5Test::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


bool testRTC5Test::runTest()
{
    return true;
}


extern "C"
{
 
  void testRTC5TestInit(RTC::Manager* manager)
  {
    coil::Properties profile(testrtc5_spec);
    manager->registerFactory(profile,
                             RTC::Create<testRTC5Test>,
                             RTC::Delete<testRTC5Test>);
  }
  
};


