import QtQuick
import QtQuick.Layouts
Rectangle{
    id:bottomSide
    anchors{
        bottom : parent.bottom
        left:parent.left
        right:parent.right
    }
    color : "black"
    height:parent.height/15
    // RowLayout{
    //     spacing: 20
    //     anchors{
    //         top:parent.top
    //         bottom:parent.bottom
    //         verticalCenter: parent.verticalCenter
    //         horizontalCenter:parent.horizontalCenter
    //         left:parent.left
    //         right:seat1.left
    //         leftMargin: 100
    //     }
    //     Image{
    //         id:car
    //         source:"Assets/caricc.png"
    //         fillMode:Image.PreserveAspectFit
    //     }
    //     Image{
    //         id:heater
    //         source:"Assets/heater.svg"

    //         fillMode:Image.PreserveAspectFit
    //     }
    //     Image{
    //         id:defrost
    //         source:"Assets/defrost.svg"
    //         fillMode:Image.PreserveAspectFit
    //     }
    // }

    // Image{
    //     id:car
    //     source:"Assets/caricc.png"
    //     anchors{
    //         left:parent.left
    //         top:parent.top
    //         bottom:parent.bottom
    //         //leftMargin:100
    //         right:heater.left
    //     }
    //     fillMode:Image.PreserveAspectFit
    // }
    // Image{
    //     id:heater
    //     source:"Assets/heater.svg"
    //     anchors{
    //         left:car.right
    //         top:parent.top
    //         bottom:parent.bottom
    //         right:defrost.left
    //         //leftMargin:80
    //     }
    //     fillMode:Image.PreserveAspectFit
    // }
    Image{
        id:defrost
        source:"Assets/defrost.svg"
        anchors{
           // left:heater.right
            top:parent.top
            bottom:parent.bottom
            right:seat1.left
            rightMargin:30
        }
        fillMode:Image.PreserveAspectFit
    }
    Image{
        id:heater
        source:"Assets/heater.svg"
        anchors{

            top:parent.top
            bottom:parent.bottom
            right:defrost.left
            rightMargin:30
        }
        fillMode:Image.PreserveAspectFit
    }
    Image{
        id:car
        source:"Assets/caricc.png"
        anchors{
            top:parent.top
            bottom:parent.bottom
            rightMargin:30
            right:heater.left
        }
        fillMode:Image.PreserveAspectFit
    }
//-------------------------------------------------
    Image{
        id:carIcon
        source:"Assets/fan.svg"
        anchors{
            verticalCenter:parent.verticalCenter
            horizontalCenter:parent.horizontalCenter
            top:parent.top
            bottom:parent.bottom
        }
        fillMode:Image.PreserveAspectFit
        MouseArea{
            anchors.fill:parent
            onClicked:{
               rightSide.mVisibility = !rightSide.mVisibility
            }
        }
    }


    Image{
        id:seat1
        source:"Assets/seat.png"
        anchors{
           right:driverControllerOne.left
           top:parent.top
           bottom:parent.bottom
        }
        fillMode:Image.PreserveAspectFit
    }

    Image{
        id:seat2
        source:"Assets/seat1.png"
        anchors{
           left:passengerControllerOne.right
           top:parent.top
           bottom:parent.bottom
           leftMargin:100
        }
        fillMode:Image.PreserveAspectFit
    }


//------------------------------------------------------------------------
    Image {
        id: audio
        source: "Assets/music.svg"
        fillMode:Image.PreserveAspectFit
        anchors{
            top:parent.top
            bottom:parent.bottom
            left:seat2.left
            leftMargin:50
        }
    }
    Image{
        id:wheather
        source:"Assets/cloud.png"
        anchors{
            top:parent.top
            bottom:parent.bottom
            left:audio.right
            leftMargin:30
        }
        fillMode:Image.PreserveAspectFit
    }
    // Image{
    //     id:phone
    //     source:"Assets/phone.svg"
    //     anchors{
    //         top:parent.top
    //         bottom:parent.bottom
    //         left:wheather.right
    //         right:audioControl.left
    //         //leftMargin:50
    //     }
    // }



}



