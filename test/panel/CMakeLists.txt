cmake_minimum_required(VERSION 3.16)

project(panel VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(apppanel
    main.cpp
)

qt_add_qml_module(apppanel
    URI panel
    VERSION 1.0
    QML_FILES
        Main.qml
        QML_FILES Right.qml
        QML_FILES Left.qml
        QML_FILES Bottom.qml
        RESOURCES Assets/battery.svg
        RESOURCES Assets/headlights.svg Assets/tirepressure.svg
        RESOURCES Assets/cars/dark/Group.png Assets/cars/dark/minus.svg Assets/cars/dark/plus.svg Assets/cars/dark/scale.svg Assets/cars/light/Group.png Assets/cars/light/minus.svg Assets/cars/light/plus.svg Assets/cars/light/scale.svg Assets/cars/Vector9.svg
        RESOURCES Assets/steeringwheel.svg
        RESOURCES Assets/SpeedLimit.svg
        RESOURCES Assets/camera.svg Assets/CruiseSetting.svg Assets/microphone.svg Assets/power.svg
        RESOURCES Assets/minus.svg Assets/plus.svg
        RESOURCES Assets/Cars/headlights.png Assets/Cars/Model3-1.svg Assets/Cars/model3-1_new.svg Assets/Cars/Model3-2.svg Assets/Cars/Model3-2_new.svg Assets/Cars/Model3.svg Assets/Cars/model3_new.svg
        QML_FILES IconButton.qml
        RESOURCES Assets/hood.png
        RESOURCES Assets/caricc.png Assets/cloud.png Assets/fan.svg Assets/music.svg Assets/person.png Assets/phone.svg Assets/seat.png Assets/seat1.png Assets/un.png
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(apppanel PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.apppanel
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(apppanel
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS apppanel
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
