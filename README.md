# `@reason-react-native/datetimepicker`

[![Build Status](https://github.com/reason-react-native/datetimepicker/workflows/Build/badge.svg)](https://github.com/reason-react-native/datetimepicker/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/datetimepicker.svg)](https://www.npmjs.com/@reason-react-native/datetimepicker)
[![Chat](https://img.shields.io/discord/235176658175262720.svg?logo=discord&colorb=blue)](https://reasonml-community.github.io/reason-react-native/discord/)

[ReasonML](https://reasonml.github.io) /
[BuckleScript](https://bucklescript.github.io) bindings for
[`@react-native-community/datetimepicker`](https://github.com/react-native-community/react-native-datetimepicker).

Exposed as the `ReactNativeDateTimePicker` module.

Version x.y.z of `@reason-react-native/datetimepicker` is intended to be
compatible with version x.y.z of `@react-native-community/datetimepicker`.

## Installation

When
[`@react-native-community/datetimepicker`](`https://github.com/react-native-community/datetimepicker`)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @reason-react-native/datetimepicker
# or
yarn add @reason-react-native/datetimepicker
```

`@reason-react-native/datetimepicker` should be added to `bs-dependencies` in
your `bsconfig.json`. For example,

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "@reason-react-native/datetimepicker"
  ],
  //...
}
```

## Usage

### Types

#### `locale = string`

Refer to
[documentation](https://developer.apple.com/library/archive/documentation/MacOSX/Conceptual/BPInternational/LanguageandLocaleIDs/LanguageandLocaleIDs.html)
for valid values.

#### `PickerEvent.t`

Assuming `pickerEvent` is `PickerEvent.t`, you can access

```reason
pickerEvent.nativeEvent.target // => option(int)
pickerEvent.nativeEvent.timestamp // => int
```

Note that `target` is undefined on Android.

### Props

All props other than `value` are optional.

#### `value: Js.Date.t`

_required_

Current value for time and date.

#### `maximumDate: Js.Date.t`

Latest date that can be selected. For example
`maximumDate = Js.Date.makeWithYMD(2020., 10., 15., ())`. Note that months are
numbered from `0`.

#### `minimumDate: Js.Date.t`

Earliest date that can be selected. For example
`minimumDate = Js.Date.makeWithYMD(2015., 0., 18., ())`. Note that months are
numbered from `0`.

#### `` mode: [ | `date | `time | `datetime | `countdown] ``

Type of the picker. Note that

- `` `date `` is the default
- `` `datetime `` and `` `countdown `` are iOS only

#### `` display: [ | `default | `spinner | `calendar | `clock] ``

_Android only_

How the picker is displayed. Note that

- \`calendar is only for `` mode=`date ``
- \`clock is only for `` mode=`time ``

#### `onChange: (pickerEvent, Js.Date.t) => unit`

- `pickerEvent` has keys `nativeEvent` on both platforms and also `_type` on
  Android.

- _Android:_ `_type` key takes value `"set"` (when the dialog is closed via
  "OK") or `"dismissed"` (when the dialog is closed via "cancel").

#### `timeZoneOffsetInMinutes: int`

_iOS only_

Allows changing time zone of the date picker. By default device's time zone is
used. As an example, set to `60` for GMT+1.

#### `locale: locale`

_iOS only_

Allows changing locale of the component. By default device's locale is used.

Refer to
[documentation](https://developer.apple.com/library/archive/documentation/MacOSX/Conceptual/BPInternational/LanguageandLocaleIDs/LanguageandLocaleIDs.html)
for valid values.

#### `is24Hour: bool`

_Android only._

Allows changing of the time picker to a 24 hour format. Default is false.

#### `minuteInterval: [ |`\_1 | `_2 |`\_3 | `_4 |`\_5 | `_6 |`\_10 | `_12 |`\_15 | `_20 |`\_30 ]`

_iOS only._

Interval at which minutes can be selected. Polymorphic constructors are rendered
to string (that is `` `_3 `` becomes `"3"`).

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more information about recent
releases.

## Contribute

Read the [contribution guidelines](./CONTRIBUTING.md) before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](./CODE_OF_CONDUCT.md) so that you can understand what
actions will and will not be tolerated.
