/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screenmodbus_screen/screenModbusViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

screenModbusViewBase::screenModbusViewBase()  :
    buttonCallback(this, &screenModbusViewBase::buttonCallbackHandler)
{
    atdi_template480x2722.setXY(0, 0);
    atdi_template480x2722.setBitmap(Bitmap(BITMAP_ATDI_TEMPLATE480X272_ID));

    buttonSettings.setPosition(410, 204, 50, 50);
    buttonSettings.setBitmaps(Bitmap(BITMAP_GEAR_50X50_ID), Bitmap(BITMAP_GEAR_50X50_ID));
    buttonSettings.setAction(buttonCallback);

    anAtdiLogo.setXY(106, 203);
    anAtdiLogo.setBitmaps(BITMAP_ATDI_LOGO1_ID, BITMAP_ATDI_LOGO_2_ID);
    anAtdiLogo.setUpdateTicksInterval(20);
    anAtdiLogo.startAnimation(false, true, true);

    textAreaScreenData1.setPosition(4, 35, 470, 141);
    textAreaScreenData1.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textAreaScreenData1.setLinespacing(0);
    textAreaScreenData1.setTypedText(TypedText(T_SINGLEUSEID11));

    textAreaScreenName.setXY(4, 4);
    textAreaScreenName.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    textAreaScreenName.setLinespacing(0);
    textAreaScreenName.setTypedText(TypedText(T_SINGLEUSEID12));

    buttonHome.setPosition(22, 205, 50, 50);
    buttonHome.setBitmaps(Bitmap(BITMAP_HOME_GRAY50X50_ID), Bitmap(BITMAP_HOME_GRAY50X50_ID));
    buttonHome.setAction(buttonCallback);

    add(atdi_template480x2722);
    add(buttonSettings);
    add(anAtdiLogo);
    add(textAreaScreenData1);
    add(textAreaScreenName);
    add(buttonHome);
}

void screenModbusViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonSettings)
    {
        //actionSettingsBtn
        //When buttonSettings clicked change screen to Main
        //Go to Main with no screen transition
        application().gotoMainScreenNoTransition();
    }
    else if (&src == &buttonHome)
    {
        //actionHomeBtn
        //When buttonHome clicked change screen to Main
        //Go to Main with no screen transition
        application().gotoMainScreenNoTransition();
    }
}
