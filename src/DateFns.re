open ReasonDateFnsCurryHelpers;

type date = Js.Date.t;

type locale;

module Locales = {
  [@bs.module "date-fns/locale/af"] external af: locale = "default";
  [@bs.module "date-fns/locale/ar-DZ"] external arDZ: locale = "default";
  [@bs.module "date-fns/locale/ar-SA"] external arSA: locale = "default";
  [@bs.module "date-fns/locale/be"] external be: locale = "default";
  [@bs.module "date-fns/locale/bg"] external bg: locale = "default";
  [@bs.module "date-fns/locale/bn"] external bn: locale = "default";
  [@bs.module "date-fns/locale/ca"] external ca: locale = "default";
  [@bs.module "date-fns/locale/cs"] external cs: locale = "default";
  [@bs.module "date-fns/locale/cy"] external cy: locale = "default";
  [@bs.module "date-fns/locale/de"] external de: locale = "default";
  [@bs.module "date-fns/locale/el"] external el: locale = "default";
  [@bs.module "date-fns/locale/eo"] external eo: locale = "default";
  [@bs.module "date-fns/locale/en"] external en: locale = "default";
  [@bs.module "date-fns/locale/en-US"] external enUS: locale = "default";
  [@bs.module "date-fns/locale/en-GB"] external enGB: locale = "default";
  [@bs.module "date-fns/locale/en-CA"] external enCA: locale = "default";
  [@bs.module "date-fns/locale/es"] external es: locale = "default";
  [@bs.module "date-fns/locale/et"] external et: locale = "default";
  [@bs.module "date-fns/locale/fa-IR"] external faIR: locale = "default";
  [@bs.module "date-fns/locale/fi"] external fi: locale = "default";
  [@bs.module "date-fns/locale/fil"] external fil: locale = "default";
  [@bs.module "date-fns/locale/fr"] external fr: locale = "default";
  [@bs.module "date-fns/locale/gl"] external gl: locale = "default";
  [@bs.module "date-fns/locale/he"] external he: locale = "default";
  [@bs.module "date-fns/locale/hr"] external hr: locale = "default";
  [@bs.module "date-fns/locale/hu"] external hu: locale = "default";
  [@bs.module "date-fns/locale/id"] external id: locale = "default";
  [@bs.module "date-fns/locale/is"] external is: locale = "default";
  [@bs.module "date-fns/locale/it"] external it: locale = "default";
  [@bs.module "date-fns/locale/ja"] external ja: locale = "default";
  [@bs.module "date-fns/locale/ka"] external ka: locale = "default";
  [@bs.module "date-fns/locale/ko"] external ko: locale = "default";
  [@bs.module "date-fns/locale/lt"] external lt: locale = "default";
  [@bs.module "date-fns/locale/lv"] external lv: locale = "default";
  [@bs.module "date-fns/locale/mk"] external mk: locale = "default";
  [@bs.module "date-fns/locale/ms"] external ms: locale = "default";
  [@bs.module "date-fns/locale/nl"] external nl: locale = "default";
  [@bs.module "date-fns/locale/pl"] external pl: locale = "default";
  [@bs.module "date-fns/locale/pt-Br"] external ptBr: locale = "default";
  [@bs.module "date-fns/locale/pt"] external pt: locale = "default";
  [@bs.module "date-fns/locale/ro"] external ro: locale = "default";
  [@bs.module "date-fns/locale/ru"] external ru: locale = "default";
  [@bs.module "date-fns/locale/sk"] external sk: locale = "default";
  [@bs.module "date-fns/locale/sl"] external sl: locale = "default";
  [@bs.module "date-fns/locale/sr"] external sr: locale = "default";
  [@bs.module "date-fns/locale/sv"] external sv: locale = "default";
  [@bs.module "date-fns/locale/th"] external th: locale = "default";
  [@bs.module "date-fns/locale/tr"] external tr: locale = "default";
  [@bs.module "date-fns/locale/ug"] external ug: locale = "default";
  [@bs.module "date-fns/locale/uk"] external uk: locale = "default";
  [@bs.module "date-fns/locale/vi"] external vi: locale = "default";
  [@bs.module "date-fns/locale/zh-CN"] external zhCN: locale = "default";
  [@bs.module "date-fns/locale/zh-TW"] external zhTW: locale = "default";
};

/******************/
/* Common helpers */
/******************/

[@bs.module "date-fns/fp/closestIndexTo"]
external uncurried_closestIndexTo: (. array(date)) => (. date) => int =
  "default";

let closestIndexTo = curry2(uncurried_closestIndexTo);

[@bs.deriving abstract]
type formatOptions = {
  [@bs.optional]
  locale,
  [@bs.optional]
  weekStartsOn: int,
  [@bs.optional]
  firstWeekContainsDate: int,
};

[@bs.module "date-fns/fp/formatWithOptions"]
external uncurried_formatWithOptions:
  (. formatOptions) => (. string) => (. date) => string =
  "default";

let formatWithOptions = curry3(uncurried_formatWithOptions);

[@bs.module "date-fns/fp/format"]
external uncurried_format: (. string) => (. date) => string = "default";
let format = curry2(uncurried_format);

[@bs.module "date-fns/fp/closestTo"]
external uncurried_closestTo: (. array(date)) => (. date) => date = "default";
let closestTo = curry2(uncurried_closestTo);

[@bs.module "date-fns/fp/compareAsc"]
external uncurried_compareAsc: (. date) => (. date) => int = "default";
let compareAsc = curry2(uncurried_compareAsc);

[@bs.module "date-fns/fp/compareDesc"]
external uncurried_compareDesc: (. date) => (. date) => int = "default";
let compareDesc = curry2(uncurried_compareDesc);

[@bs.module "date-fns/fp/formatDistance"]
external uncurried_formatDistance: (. date) => (. date) => string = "default";
let formatDistance = curry2(uncurried_formatDistance);

[@bs.deriving abstract]
type formatDistanceOptions = {
  [@bs.optional]
  locale,
  [@bs.optional]
  addSuffix: bool,
  [@bs.optional]
  includeSeconds: bool,
};

[@bs.module "date-fns/fp/formatDistanceWithOptions"]
external uncurried_formatDistanceWithOptions:
  (. formatDistanceOptions) => (. date) => (. date) => string =
  "default";
let formatDistanceWithOptions = curry3(uncurried_formatDistanceWithOptions);

[@bs.module "date-fns/fp/formatDistanceStrict"]
external formatDistanceStrict: (. date) => (. date) => string = "default";
let formatDistanceStrict = curry2(formatDistanceStrict);

[@bs.deriving abstract]
type formatDistanceStrictOptions = {
  [@bs.optional]
  locale,
  [@bs.optional]
  roundingMethod: [ | `floor | `ceil | `round],
  [@bs.optional]
  unit: [ | `second | `minute | `hour | `day | `month | `year],
  [@bs.optional]
  addSuffix: bool,
};

[@bs.module "date-fns/fp/formatDistanceStrictWithOptions"]
external uncurried_formatDistanceStrictWithOptions:
  (. formatDistanceStrictOptions) => (. date) => (. date) => string =
  "default";
let formatDistanceStrictWithOptions = curry2(uncurried_formatDistanceStrictWithOptions);

[@bs.module "date-fns/fp/formatRelative"]
external uncurried_formatRelative: (. date) => (. date) => string = "default";
let formatRelative = curry2(uncurried_formatRelative);

[@bs.module "date-fns/fp/isAfter"]
external uncurried_isAfter: (. date) => (. date) => bool = "default";
let isAfter = curry2(uncurried_isAfter);

[@bs.module "date-fns/fp/isBefore"]
external uncurried_isBefore: (. date) => (. date) => bool = "default";
let isBefore = curry2(uncurried_isBefore);

[@bs.module "date-fns/fp/isDate"] external isDate: date => bool = "default";

[@bs.module "date-fns/fp/isValid"] external isVaid: date => bool = "default";

[@bs.module "date-fns/fp/isEqual"]
external uncurried_isEqual: (. date) => (. date) => bool = "default";
let isEqual = curry2(uncurried_isEqual);

[@bs.module "date-fns/fp/lightFormat"]
external uncurried_lightFormat: (. string) => (. date) => string = "default";
let lightFormat = curry2(uncurried_lightFormat);

[@bs.module "date-fns/fp/max"] external max: array(date) => date = "default";

[@bs.module "date-fns/fp/min"] external min: array(date) => date = "default";

[@bs.module "date-fns/fp/parse"]
external uncurried_parse: (. date) => (. string) => (. string) => date =
  "default";
let parse = curry3(uncurried_parse);

[@bs.module "date-fns/fp/parseISO"]
external parseISO: string => date = "default";

[@bs.module "date-fns/fp/toDate"] external toDate: int => date = "default";

[@bs.module "date-fns/fp/fromUnixTime"] external fromUnixTime: float => date = "default";

[@bs.module "date-fns/fp/getUnixTime"] external getUnixTime: date => float = "default";

[@bs.module "date-fns/fp/getTime"] external getTime: date => int = "default";

/***************/
/* Day helpers */
/***************/

[@bs.module "date-fns/fp/addBusinessDays"]
external uncurried_addBusinessDays: (. int) => (. date) => date = "default";
let addBusinessDays = curry2(uncurried_addBusinessDays);

[@bs.module "date-fns/fp/addDays"]
external uncurried_addDays: (. int) => (. date) => date = "default";
let addDays = curry2(uncurried_addDays);

[@bs.module "date-fns/fp/differenceInBusinessDays"]
external uncurried_differenceInBusinessDays: (. date) => (. date) => int =
  "default";
let differenceInBusinessDays = curry2(uncurried_differenceInBusinessDays);

[@bs.module "date-fns/fp/differenceInCalendarDays"]
external uncurried_differenceInCalendarDays: (. date) => (. date) => int =
  "default";
let differenceInCalendarDays = curry2(uncurried_differenceInCalendarDays);

[@bs.module "date-fns/fp/differenceInDays"]
external uncurried_differenceInDays: (. date) => (. date) => int = "default";
let differenceInDays = curry2(uncurried_differenceInDays);

[@bs.module "date-fns/fp/endOfDay"]
external endOfDay: date => date = "default";
[@bs.module "date-fns/fp/startOfDay"]
external startOfDay: date => date = "default";
[@bs.module "date-fns/fp/getDate"] external getDate: date => int = "default";
[@bs.module "date-fns/fp/getDayOfYear"]
external getDayOfYear: date => int = "default";

[@bs.module "date-fns/fp/isSameDay"]
external uncurried_isSameDay: (. date) => (. date) => bool = "default";
let isSameDay = curry2(uncurried_isSameDay);

[@bs.module "date-fns/fp/setDayOfYear"]
external uncurried_setDayOfYear: (. int) => (. date) => date = "default";
let setDayOfYear = curry2(uncurried_setDayOfYear);

[@bs.module "date-fns/fp/subDays"]
external uncurried_subDays: (. int) => (. date) => date = "default";
let subDays = curry2(uncurried_subDays);

/***************/
/* Milliseconds helpers */
/***************/

[@bs.module "date-fns/fp/addMilliseconds"]
external uncurried_addMilliseconds: (. int) => (. date) => date = "default";
let addMilliseconds = curry2(uncurried_addMilliseconds);

[@bs.module "date-fns/fp/differenceInMilliseconds"]
external uncurried_differenceInMilliseconds: (. date) => (. date) => int =
  "default";
let differenceInMilliseconds = curry2(uncurried_differenceInMilliseconds);

[@bs.module "date-fns/fp/getMilliseconds"]
external getMilliseconds: date => int = "default";

[@bs.module "date-fns/fp/setMilliseconds"]
external uncurried_setMilliseconds: (. int) => (. date) => date = "default";
let setMilliseconds = curry2(uncurried_setMilliseconds);

[@bs.module "date-fns/fp/subMilliseconds"]
external uncurried_subMilliseconds: (. int) => (. date) => date = "default";
let subMilliseconds = curry2(uncurried_subMilliseconds);

/***************/
/* Seconds helpers */
/***************/

[@bs.module "date-fns/fp/addSeconds"]
external uncurried_addSeconds: (. float) => (. date) => date = "default";
let addSeconds = curry2(uncurried_addSeconds);

[@bs.module "date-fns/fp/differenceInSeconds"]
external uncurried_differenceInSeconds: (. date) => (. date) => float =
  "default";
let differenceInSeconds = curry2(uncurried_differenceInSeconds);

[@bs.module "date-fns/fp/endOfSecond"]
external endOfSecond: date => date = "default";

[@bs.module "date-fns/fp/startOfSecond"]
external startOfSecond: date => date = "default";

[@bs.module "date-fns/fp/getSeconds"]
external getSeconds: date => float = "default";

[@bs.module "date-fns/fp/setSeconds"]
external uncurried_setSeconds: (. float) => (. date) => date = "default";
let setSeconds = curry2(uncurried_setSeconds);

[@bs.module "date-fns/fp/isSameSecond"]
external uncurried_isSameSecond: (. date) => (. date) => bool = "default";
let isSameSecond = curry2(uncurried_isSameSecond);

[@bs.module "date-fns/fp/subSeconds"]
external uncurried_subSeconds: (. float) => (. date) => date = "default";
let subSeconds = curry2(uncurried_subSeconds);

/***************/
/* Minute helpers */
/***************/

[@bs.module "date-fns/fp/addMinutes"]
external uncurried_addMinutes: (. float) => (. date) => date = "default";
let addMinutes = curry2(uncurried_addMinutes);

[@bs.module "date-fns/fp/differenceInMinutes"]
external uncurried_differenceInMinutes: (. date) => (. date) => float =
  "default";
let differenceInMinutes = curry2(uncurried_differenceInMinutes);

[@bs.module "date-fns/fp/endOfMinute"]
external endOfMinute: date => date = "default";

[@bs.module "date-fns/fp/startOfMinute"]
external startOfMinute: date => date = "default";

[@bs.module "date-fns/fp/getMinutes"]
external getMinutes: date => float = "default";

[@bs.module "date-fns/fp/setMinutes"]
external uncurried_setMinutes: (. float) => (. date) => date = "default";
let setMinutes = curry2(uncurried_setMinutes);

[@bs.module "date-fns/fp/isSameMinute"]
external uncurried_isSameMinute: (. date) => (. date) => bool = "default";
let isSameMinute = curry2(uncurried_isSameMinute);

[@bs.module "date-fns/fp/subMinutes"]
external uncurried_subMinutes: (. float) => (. date) => date = "default";
let subMinutes = curry2(uncurried_subMinutes);

[@bs.module "date-fns/fp/roundToNearestMinutes"]
external roundToNearestMinutes: date => float = "default";

/***************/
/* Hour helpers */
/***************/

[@bs.module "date-fns/fp/addHours"]
external uncurried_addHours: (. float) => (. date) => date = "default";
let addHours = curry2(uncurried_addHours);

[@bs.module "date-fns/fp/differenceInHours"]
external uncurried_differenceInHours: (. date) => (. date) => float =
  "default";
let differenceInHours = curry2(uncurried_differenceInHours);

[@bs.module "date-fns/fp/endOfHour"]
external endOfHour: date => date = "default";

[@bs.module "date-fns/fp/startOfHour"]
external startOfHour: date => date = "default";

[@bs.module "date-fns/fp/getHours"]
external getHours: date => float = "default";

[@bs.module "date-fns/fp/setHours"]
external uncurried_setHours: (. float) => (. date) => date = "default";
let setHours = curry2(uncurried_setHours);

[@bs.module "date-fns/fp/isSameHour"]
external uncurried_isSameHour: (. date) => (. date) => bool = "default";
let isSameHour = curry2(uncurried_isSameHour);

[@bs.module "date-fns/fp/subHours"]
external uncurried_subHours: (. float) => (. date) => date = "default";
let subHours = curry2(uncurried_subHours);

/***************/
/* Weekday helpers */
/***************/

[@bs.module "date-fns/fp/getDay"]
external getDay: date => int = "default";

[@bs.module "date-fns/fp/getISODay"]
external getISODay: date => int = "default";

[@bs.module "date-fns/fp/isMonday"]
external isMonday: date => bool = "default";

[@bs.module "date-fns/fp/isSaturday"]
external isSaturday: date => bool = "default";

[@bs.module "date-fns/fp/isSunday"]
external isSunday: date => bool = "default";

[@bs.module "date-fns/fp/isThursday"]
external isThursday: date => bool = "default";

[@bs.module "date-fns/fp/isTuesday"]
external isTuesday: date => bool = "default";

[@bs.module "date-fns/fp/isWednesday"]
external isWednesday: date => bool = "default";

[@bs.module "date-fns/fp/isWeekend"]
external isWeekend: date => bool = "default";

[@bs.module "date-fns/fp/setDay"]
external uncurried_setDay: (. date) => (. date) => date ="default"
let setDay = curry2(uncurried_setDay);

[@bs.deriving abstract]
type setDayOptions = {
  [@bs.optional]
  locale,
  [@bs.optional]
  weekStartsOn: int,
};

[@bs.module "date-fns/fp/setDay"]
external uncurried_setDayWithOptions: (. setDayOptions) => (. date) => (. date) => date ="setDay"
let setDayWithOptions = curry2(uncurried_setDayWithOptions);

[@bs.module "date-fns/fp/setISODay"]
external uncurried_setISODay: (. date) => (. date) => date ="default"
let setISODay = curry2(uncurried_setISODay);


/***************/
/* Week helpers */
/***************/

[@bs.module "date-fns/fp/addWeeks"]
external uncurried_addWeeks: (. float) => (. date) => date = "default";
let addWeeks = curry2(uncurried_addWeeks);

[@bs.module "date-fns/fp/differenceInWeeks"]
external uncurried_differenceInWeeks: (. date) => (. date) => float =
  "default";
let differenceInWeeks = curry2(uncurried_differenceInWeeks);

[@bs.module "date-fns/fp/endOfWeek"]
external endOfWeek: date => date = "default";

[@bs.module "date-fns/fp/startOfWeek"]
external startOfWeek: date => date = "default";

[@bs.module "date-fns/fp/getWeek"]
external getWeek: date => float = "default";

[@bs.module "date-fns/fp/setWeek"]
external uncurried_setWeek: (. float) => (. date) => date = "default";
let setWeek = curry2(uncurried_setWeek);

[@bs.module "date-fns/fp/isSameWeek"]
external uncurried_isSameWeek: (. date) => (. date) => bool = "default";
let isSameWeek = curry2(uncurried_isSameWeek);

[@bs.module "date-fns/fp/subWeeks"]
external uncurried_subWeeks: (. float) => (. date) => date = "default";
let subWeeks = curry2(uncurried_subWeeks);

[@bs.module "date-fns/fp/getWeeksInMonth"]
external getWeeksInMonth: date => int = "default";

[@bs.module "date-fns/fp/getWeekOfMonth"]
external getWeekOfMonth: date => int = "default";

/***************/
/* Month helpers */
/***************/

[@bs.module "date-fns/fp/addMonths"]
external uncurried_addMonths: (. float) => (. date) => date = "default";
let addMonths = curry2(uncurried_addMonths);

[@bs.module "date-fns/fp/differenceInMonths"]
external uncurried_differenceInMonths: (. date) => (. date) => float =
  "default";
let differenceInMonths = curry2(uncurried_differenceInMonths);

[@bs.module "date-fns/fp/differenceInCalendarMonths"]
external uncurried_differenceInCalendarMonths: (. date) => (. date) => float =
  "default";
let differenceInCalendarMonths = curry2(uncurried_differenceInCalendarMonths);

[@bs.module "date-fns/fp/eachWeekendOfMonth"]
external eachWeekendOfMonth: date => array(date) = "default";

[@bs.module "date-fns/fp/getDaysInMonth"]
external getDaysInMonth: date => int = "default";

[@bs.module "date-fns/fp/endOfMonth"]
external endOfMonth: date => date = "default";

[@bs.module "date-fns/fp/startOfMonth"]
external startOfMonth: date => date = "default";

[@bs.module "date-fns/fp/getMonth"]
external getMonth: date => float = "default";

[@bs.module "date-fns/fp/setMonth"]
external uncurried_setMonth: (. float) => (. date) => date = "default";
let setMonth = curry2(uncurried_setMonth);

[@bs.module "date-fns/fp/isSameMonth"]
external uncurried_isSameMonth: (. date) => (. date) => bool = "default";
let isSameMonth = curry2(uncurried_isSameMonth);

[@bs.module "date-fns/fp/subMonths"]
external uncurried_subMonths: (. float) => (. date) => date = "default";
let subMonths = curry2(uncurried_subMonths);

[@bs.module "date-fns/fp/isFirstDayOfMonth"]
external uncurried_isFirstDayOfMonth: (. date) => (. date) => bool = "default";
let isFirstDayOfMonth = curry2(uncurried_isFirstDayOfMonth);

[@bs.module "date-fns/fp/isLastDayOfMonth"]
external uncurried_isLastDayOfMonth: (. date) => (. date) => bool = "default";
let isLastDayOfMonth = curry2(uncurried_isLastDayOfMonth);

/***************/
/* Year helpers */
/***************/

[@bs.module "date-fns/fp/addYears"]
external uncurried_addYears: (. float) => (. date) => date = "default";
let addYears = curry2(uncurried_addYears);

[@bs.module "date-fns/fp/differenceInYears"]
external uncurried_differenceInYears: (. date) => (. date) => float =
  "default";
let differenceInYears = curry2(uncurried_differenceInYears);

[@bs.module "date-fns/fp/differenceInCalendarYears"]
external uncurried_differenceInCalendarYears: (. date) => (. date) => float =
  "default";
let differenceInCalendarYears = curry2(uncurried_differenceInCalendarYears);

[@bs.module "date-fns/fp/eachWeekendOfYear"]
external eachWeekendOfYear: date => array(date) = "default";

[@bs.module "date-fns/fp/getDaysInYear"]
external getDaysInYear: date => int = "default";

[@bs.module "date-fns/fp/endOfYear"]
external endOfYear: date => date = "default";

[@bs.module "date-fns/fp/startOfYear"]
external startOfYear: date => date = "default";

[@bs.module "date-fns/fp/getYear"]
external getYear: date => float = "default";

[@bs.module "date-fns/fp/setYear"]
external uncurried_setYear: (. float) => (. date) => date = "default";
let setYear = curry2(uncurried_setYear);

[@bs.module "date-fns/fp/isSameYear"]
external uncurried_isSameYear: (. date) => (. date) => bool = "default";
let isSameYear = curry2(uncurried_isSameYear);

[@bs.module "date-fns/fp/subYears"]
external uncurried_subYears: (. float) => (. date) => date = "default";
let subYears = curry2(uncurried_subYears);

[@bs.module "date-fns/fp/lastDayOfYear"]
external uncurried_lastDayOfYear: date => date = "default";

[@bs.module "date-fns/fp/isLeapYear"]
external uncurried_isLeapYear: date => bool = "default";
