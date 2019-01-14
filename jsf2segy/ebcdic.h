/*
 *   Template for the creation of the EBCDIC header for a segy tape file.
 */


char *ebcdicTemplate[40] =  {
"C 1 CLIENT                       COMPANY                        CREW NO 0       ",
"C 2 LINE 1          AREA                       MAP ID None                      ",
"C 3 REEL NO 1         DAY-START OF REEL 000 YEAR 1900 OBSERVER                  ",
"C 4 INSTRUMENT:                MODEL            SERIAL NO                       ",
"C 5 DATA TRACES/RECORD        AUXILIARY TRACES/RECORD         CDP FOLD          ",
"C 6 SAMPLE INTERVAL         SAMPLES/TRACE       BITS/IN      BYTES/SAMPLE       ",
"C 7 RECORDING FORMAT        FORMAT THIS REEL        MEASUREMENT SYSTEM          ",
"C 8 SAMPLE CODE:                                                                ",
"C 9 GAIN TYPE:                                                                  ",
"C10 FILTERS: ALIAS     HZ  NOTCH     HZ  BAND           HZ  SLOPE        DB/OCT ",
"C11 SOURCE:                 NUMBER/POINT         POINT INTERVAL                 ",
"C12 PATTERN:                               LENGTH        WIDTH                  ",
"C13 SWEEP:           HZ          HZ  LENGTH      MS  CHANNEL NO     TYPE        ",
"C14 TAPER:                    MS                   MS  TYPE                     ",
"C15 SPREAD:                                                                     ",
"C16 GEOPHONES:                                                                  ",
"C17 PATTERN:                                                                    ",
"C18 TRACES SORTED BY: RECORD                                                    ",
"C19 AMPLITUDE RECOVERY:                                                         ",
"C20 MAP PROJECTION                                                              ",
"C21 PROCESSING:                                                                 ",
"C22 ACOUSTIC SOURCE:                          FIRE RATE:         SECS           ",
"C23                                                                             ",
"C24                                                                             ",
"C25                                                                             ",
"C26                                                                             ",
"C27                                                                             ",
"C28                                                                             ",
"C29                                                                             ",
"C30                                                                             ",
"C31                                                                             ",
"C32                                                                             ",
"C33                                                                             ",
"C34                                                                             ",
"C35                                                                             ",
"C36                                                                             ",
"C37                                                                             ",
"C38                                                                             ",
"C39                                                                             ",
"C40 END TEXTUAL HEADER                                                          "
};
