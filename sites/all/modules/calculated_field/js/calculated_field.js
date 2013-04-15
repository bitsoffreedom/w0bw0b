(function($) {

  Date.getDaysDifference = function(fromDate, toDate, abs) {
     fromDate = new Date(fromDate.getFullYear(),fromDate.getMonth(),fromDate.getDate());
     toDate = new Date(toDate.getFullYear(),toDate.getMonth(),toDate.getDate());
     var days = Math.round((toDate-fromDate)/86400000);  //Total millisends in day =1000*60*60*24
     return abs ? Math.abs(days) : days;
  }

  Date.prototype.getDaysDifference = function(toDate, abs) {
     abs = typeof abs !== 'undefined' ? abs : false;
     return Date.getDaysDifference(this, toDate, abs);
  }

  Drupal.behaviors.calculated_field = {
    attach: function() {

      // Process all datepickers, else we can not get/set the value through code
      for (var id in Drupal.settings.datePopup) {
        $('#'+ id).each(function(e) {
          if (!$(this).hasClass('date-popup-init')) {
            var datePopup = Drupal.settings.datePopup[id];
            // Explicitely filter the methods we accept.
            switch (datePopup.func) {
              case 'datepicker':
                $(this)
                  .datepicker(datePopup.settings)
                  .addClass('date-popup-init')
                $(this).click(function(){
                  $(this).focus();
                });
                break;

              case 'timeEntry':
                $(this)
                  .timeEntry(datePopup.settings)
                  .addClass('date-popup-init')
                $(this).click(function(){
                  $(this).focus();
                });
                break;
              case 'timepicker':
                // Translate the PHP date format into the style the timepicker uses.
                datePopup.settings.timeFormat = datePopup.settings.timeFormat
                  // 12-hour, leading zero,
                  .replace('h', 'hh')
                  // 12-hour, no leading zero.
                  .replace('g', 'h')
                  // 24-hour, leading zero.
                  .replace('H', 'HH')
                  // 24-hour, no leading zero.
                  .replace('G', 'H')
                  // AM/PM.
                  .replace('A', 'p')
                  // Minutes with leading zero.
                  .replace('i', 'mm')
                  // Seconds with leading zero.
                  .replace('s', 'ss');

                datePopup.settings.startTime = new Date(datePopup.settings.startTime);
                $(this)
                  .timepicker(datePopup.settings)
                  .addClass('date-popup-init');
                $(this).click(function(){
                  $(this).focus();
                });
                break;
            }
          }
        });
      }

      $('.form-wrapper').once('calculated-field', function() {
        var self = $(this);

        /* Turned off
        $(this).click(function() {
          self.addClass('calculated-field-overridden');
        });*/

        $(this).find('input, select, textarea').change(function() {
          setTimeout(function() {
            for (var i in Drupal.settings.calculated_field) {
              if ($('#' + i + '_locked').is(':checked')) {
                eval(Drupal.settings.calculated_field[i]);
              }
            }
          }, 10);
        });
      });
    }
  }

})(jQuery);
