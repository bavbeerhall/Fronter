#pragma once
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "ConfigurationParser/Configuration.h"

class Frontend : public wxApp
{
public:
   virtual bool OnInit();
 std::shared_ptr<Configuration::Configuration> configuration;
};