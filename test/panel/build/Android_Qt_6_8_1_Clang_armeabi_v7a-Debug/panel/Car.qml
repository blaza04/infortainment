
import QtQuick 2.15
import QtQuick.Layouts
import QtQuick.Controls

import "./Settings.qml"

Rectangle {
    property double selectedOpacity: 1.0
    property double unselectedOpacity: 0.6
    property int selectedIndex: 0 // Track which button is selected

    id: main
    color: "transparent"
    width: parent.width * 0.95
    anchors {
        horizontalCenter: parent.horizontalCenter
        top: timeText.bottom
        bottom: parent.bottom
    }

    Rectangle {
        height: parent.height
        width: parent.width * 0.4
        color: "#0E0E0E"
        anchors {
            left: parent.left
        }

        Column {
            anchors {
                left: parent.left
                right: parent.right
                top: parent.top
                bottom: parent.bottom
                topMargin: 50
            }
            spacing: 30

            Repeater {
                model: [
                    { icon: "Assets/Settings/quickcontrols.svg", label: "Quick Controls" },
                    { icon: "Assets/Settings/lights.svg", label: "Lights controls" },
                    { icon: "Assets/Settings/lock.svg", label: "Lock settings" },
                    { icon: "Assets/Settings/display.svg", label: "Display" },
                    { icon: "Assets/Settings/model3-icon-small.svg", label: "Driving" },
                    { icon: "Assets/Settings/steering-wheel-small.svg", label: "Autopilot" },
                    { icon: "Assets/Settings/safetyandsecurity.svg", label: "Safety and security" },
                    { icon: "Assets/Settings/service.svg", label: "Service" }
                ]

                IconButton {
                    id: button
                    setIcon: modelData.icon
                    setLabel: modelData.label
                    opacity: index === main.selectedIndex ? main.selectedOpacity : main.unselectedOpacity
                    onClicked: {
                        main.selectedIndex = index
                        console.log("Selected: " + modelData.label)
                        switchPage(index)
                    }
                }
            }
        }
    }

    Rectangle {
        height: parent.height
        width: parent.width * 0.6
        color: "black"
        anchors {
            right: parent.right
        }
        StackView{
           id:stack
           anchors.fill:parent
           initialItem:"Settings.qml/QuickControls.qml"
        }


    }
    function switchPage(index){
      switch(index){
      case 0:
          stack.replace(null,"Settings.qml/QuickControls.qml")
          break;
       case 1:
           stack.replace(null,"Settings.qml/Light.qml")
           break;
       case 2:
           stack.replace(null,"Settings.qml/Lock.qml")
           break;
       case 3:
           stack.replace(null,"Settings.qml/Display.qml")
           break;
       case 4:
           stack.replace(null,"Settings.qml/Driving.qml")
           break;
       case 5:
           stack.replace(null,"Settings.qml/Autopilot.qml")
           break;
       case 6:
           stack.replace(null,"Settings.qml/Saftey.qml")
           break;
       case 7:
           stack.replace(null,"Settings.qml/Security.qml")
           break;

      }
    }
}
