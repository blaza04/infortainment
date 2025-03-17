cmake_minimum_required(VERSION 3.16)

project(infortainment VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Core Quick Location Positioning)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appinfortainment
    main.cpp
)

qt_add_qml_module(appinfortainment
    URI infortainment
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES Bottom.qml
        QML_FILES Right.qml
        QML_FILES Left.qml
        RESOURCES Assets/lock.png
        RESOURCES Assets/car.png
        SOURCES system.h system.cpp
        RESOURCES Assets/unlockk.png
        RESOURCES Assets/caricon.png Assets/un.png
        RESOURCES Assets/caricc.png
        RESOURCES Assets/person.png
        RESOURCES Assets/search.png
        SOURCES controller.h controller.cpp
        QML_FILES Controllers.qml
        RESOURCES Assets/vollow.png Assets/volmid.png
        SOURCES audio.h audio.cpp
        RESOURCES Assets/mute.png
        QML_FILES AudioControl.qml
        RESOURCES Assets/newcar.jpg
        RESOURCES Assets/fan.svg
        RESOURCES Assets/inflow.png Assets/outflow.png Assets/seat.png
        RESOURCES Assets/seat1.png
        RESOURCES Assets/defrost.svg Assets/heater.svg
        RESOURCES Assets/music.svg
        RESOURCES Assets/cloud.png
        RESOURCES Assets/phone.svg
        RESOURCES Assets/battery.svg Assets/headlights.svg Assets/tirepressure.svg
        RESOURCES Assets/camera.svg Assets/CruiseSetting.svg Assets/microphone.svg Assets/minus.svg Assets/plus.svg Assets/power.svg Assets/SpeedLimit.svg Assets/steeringwheel.svg
        RESOURCES Assets/cars/dark/Group.png Assets/cars/dark/minus.svg Assets/cars/dark/plus.svg Assets/cars/dark/scale.svg Assets/cars/light/Group.png Assets/cars/light/minus.svg Assets/cars/light/plus.svg Assets/cars/light/scale.svg Assets/cars/Vector9.svg
        RESOURCES Assets/Cars/headlights.png Assets/Cars/Model3-1.svg Assets/Cars/model3-1_new.svg Assets/Cars/Model3-2.svg Assets/Cars/Model3-2_new.svg Assets/Cars/Model3.svg Assets/Cars/model3_new.svg
        RESOURCES Assets/hood.png
        QML_FILES IconButton.qml
        RESOURCES Assets/power_dark.png Assets/trunk.png
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appinfortainment PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appinfortainment
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appinfortainment
    PRIVATE Qt6::Quick Qt6::Location Qt6::Positioning
)

include(GNUInstallDirs)
install(TARGETS appinfortainment
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
