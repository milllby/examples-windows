﻿//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

//
// Scenario3.xaml.h
// Declaration of the Scenario3 class
//

#pragma once

#include "pch.h"
#include "Scenario3_oAuthFlickr.g.h"
#include "MainPage.xaml.h"

namespace SDKSample
{
    namespace WebAuthentication
    {
        /// <summary>
        /// An empty page that can be used on its own or navigated to within a Frame.
        /// </summary>
        [Windows::Foundation::Metadata::WebHostHidden]
        public ref class Scenario3 sealed
        {
        public:
            Scenario3();
    
        protected:
            virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;		
			#if WINAPI_FAMILY == WINAPI_FAMILY_PC_APP
			virtual void OnNavigatedFrom(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;		
			#endif
        private:
            MainPage^ rootPage;
            void Show_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

			void HandleAppSpecificCmd(Windows::UI::Popups::IUICommand^ command);
    	};
    }
}
