import QtQuick
import QtQuick.Layouts
import QtQuick.Controls
import QtQuick.Controls.Material

RowLayout {
    property alias labelText: label.text
    property alias fieldText: field.placeholderText

    readonly property int longest: {
        Math.max(label.implicitWidth, field.implicitWidth)
    }

    Label {
        id: label
        text: ""
        Layout.preferredWidth: parent.longest
        horizontalAlignment: Label.AlignRight
    }
    TextField {
        id: field
        placeholderText: ""
        Layout.fillWidth: true
    }
}
