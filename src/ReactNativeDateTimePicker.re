include ReactNative.NativeElement;

// For localeId refer to
// https://developer.apple.com/library/archive/documentation/MacOSX/Conceptual/BPInternational/LanguageandLocaleIDs/LanguageandLocaleIDs.html
type locale = string;

type pickerEvent =
  ReactNative.Event.syntheticEvent({
    .
    "target": option(int),
    "timestamp": int,
  });

[@react.component] [@bs.module "@react-native-community/datetimepicker"]
external make:
  (
    ~ref: ref=?,
    // DateTimePicker props
    ~mode: [@bs.string] [ | `date | `time | `datetime | `countdown]=?,
    ~display: [@bs.string] [ | `default | `spinner | `calendar | `clock]=?,
    ~onChange: (pickerEvent, Js.Date.t) => unit=?,
    ~value: Js.Date.t,
    ~maximumDate: Js.Date.t=?,
    ~minimumDate: Js.Date.t=?,
    ~timeZoneOffsetInMinutes: int=?,
    ~locale: locale=?,
    ~is24Hour: bool=?,
    ~minuteInterval: [@bs.string] [
                       | [@bs.as "1"] `_1
                       | [@bs.as "2"] `_2
                       | [@bs.as "3"] `_3
                       | [@bs.as "4"] `_4
                       | [@bs.as "5"] `_5
                       | [@bs.as "6"] `_6
                       | [@bs.as "10"] `_10
                       | [@bs.as "12"] `_12
                       | [@bs.as "15"] `_15
                       | [@bs.as "20"] `_20
                       | [@bs.as "30"] `_30
                     ]
                       =?,
    // View props
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]
                                   =?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: [@bs.string] [ | `none | `polite | `assertive]=?,
    ~accessibilityRole: [@bs.string] [
                          | `none
                          | `button
                          | `link
                          | `search
                          | `image
                          | `keyboardkey
                          | `text
                          | `adjustable
                          | `header
                          | `summary
                          | `imagebutton
                        ]
                          =?,
    ~accessibilityStates: array(ReactNative.AccessibilityState.t)=?,
    ~accessibilityTraits: array(ReactNative.AccessibilityTrait.t)=?,
    ~accessibilityViewIsModal: bool=?,
    ~accessible: bool=?,
    ~collapsable: bool=?,
    ~hitSlop: ReactNative.View.edgeInsets=?,
    ~importantForAccessibility: [@bs.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@bs.as "no-hide-descendants"]
                                    `noHideDescendants
                                ]
                                  =?,
    ~nativeID: string=?,
    ~needsOffscreenAlphaCompositing: bool=?,
    ~onAccessibilityEscape: unit => unit=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: ReactNative.Event.layoutEvent => unit=?,
    ~onMagicTap: unit => unit=?,
    // Gesture Responder props
    ~onMoveShouldSetResponder: ReactNative.Event.pressEvent => bool=?,
    ~onMoveShouldSetResponderCapture: ReactNative.Event.pressEvent => bool=?,
    ~onResponderEnd: ReactNative.Event.pressEvent => unit=?,
    ~onResponderGrant: ReactNative.Event.pressEvent => unit=?,
    ~onResponderMove: ReactNative.Event.pressEvent => unit=?,
    ~onResponderReject: ReactNative.Event.pressEvent => unit=?,
    ~onResponderRelease: ReactNative.Event.pressEvent => unit=?,
    ~onResponderStart: ReactNative.Event.pressEvent => unit=?,
    ~onResponderTerminate: ReactNative.Event.pressEvent => unit=?,
    ~onResponderTerminationRequest: ReactNative.Event.pressEvent => bool=?,
    ~onStartShouldSetResponder: ReactNative.Event.pressEvent => bool=?,
    ~onStartShouldSetResponderCapture: ReactNative.Event.pressEvent => bool=?,
    ~pointerEvents: [@bs.string] [
                      | `auto
                      | `none
                      | [@bs.as "box-none"] `boxNone
                      | [@bs.as "box-only"] `boxOnly
                    ]
                      =?,
    ~removeClippedSubviews: bool=?,
    ~renderToHardwareTextureAndroid: bool=?,
    ~shouldRasterizeIOS: bool=?,
    ~style: ReactNative.Style.t=?,
    ~testID: string=?
  ) =>
  React.element =
  "default";
