#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#include "winrt/Microsoft.UI.Xaml.Media.Imaging.h"
#include "string"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Microsoft::UI::Xaml::Media::Imaging;
using namespace Microsoft::UI::Xaml::Media;
using namespace Windows::Foundation;
using namespace std;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Test::implementation
{
    
    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }
    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}

void winrt::Test::implementation::MainWindow::ProfileImageRadio_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    string st = "You selected Option 1 ";
    aaa().Text(to_hstring(st));

    Image img;
    BitmapImage bimg;
    Uri uri = Uri(to_hstring("https://docs.microsoft.com/windows/uwp/contacts-and-calendar/images/shoulder-tap-static-payload.png"));
    bimg.UriSource(uri);
    img.Source() = bimg;
    personPicture().ProfilePicture(bimg);
}

void winrt::Test::implementation::MainWindow::DisplayNameRadio_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    string st = "You selected Option 2 ";
    aaa().Text(to_hstring(st));

    personPicture().ProfilePicture(NULL);
    personPicture().Initials(to_hstring(""));
    personPicture().DisplayName(to_hstring("Jane Doe"));
}

void winrt::Test::implementation::MainWindow::InitialsRadio_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    string st = "You selected Option 3 ";
    aaa().Text(to_hstring(st));

    personPicture().ProfilePicture(NULL);
    personPicture().Initials(to_hstring("SB"));
}
