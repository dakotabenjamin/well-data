<?php

/**
 * @file
 * Provides Entity metadata integration.
 */

/**
 * Extend the defaults.
class WellDataMetadataController extends EntityDefaultMetadataController {

  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];

    $properties['did'] = array(
      'label' => t('Datum ID'),
      'description' => t('The unique value for the datum. '),
      'setter callback' => 'entity_property_verbatim_set',
      'setter permission' => 'administer well data',
      'schema field' => 'did',
    );

    $properties['date'] = array(
      'label' => t("Date"),
      'type' => 'varchar',
      'description' => t("The date the datum was recorded"),
      'setter callback' => 'entity_property_verbatim_set',
      'setter permission' => 'administer well data',
      'schema field' => 'date',
    );

    $properties['time'] = array(
      'label' => t("Time"),
      'type' => 'varchar',
      'schema field' => 'time',
      'description' => t("The date the profile was most recently updated."),
      'setter callback' => 'entity_property_verbatim_set',
      'setter permission' => 'administer well data',
    );

    $properties['datetime'] = array(
      'label' => t("Datetime"),
      'type' => 'int',
      'schema field' => 'datetime',
      'description' => t("The datetime."),
      'setter callback' => 'entity_property_verbatim_set',
      'setter permission' => 'administer well data',
    );

    $properties['level'] = array(
      'label' => t("Level"),
      'type' => 'float',
      'schema field' => 'level',
      'description' => t("The recorded level."),
      'setter callback' => 'entity_property_verbatim_set',
      'setter permission' => 'administer well data',
    );

    $properties['units'] = array(
      'label' => t("Units"),
      'type' => 'varchar',
      'schema field' => 'units',
      'description' => t("The units."),
      'setter callback' => 'entity_property_verbatim_set',
      'setter permission' => 'administer well data',
    );

    $properties['calibration'] = array(
      'label' => t("Calibration"),
      'type' => 'float',
      'schema field' => 'calibration',
      'description' => t("The calibration level."),
      'setter callback' => 'entity_property_verbatim_set',
      'setter permission' => 'administer well data',
    );

    return $info;
  }
}

 */
/**
 * Implements hook_entity_property_info_alter().
 */
function well_data_entity_property_info_alter(&$info) {
  // Add related profiles to the well datum object.
  $properties = &$info['well_data']['properties'];
  $properties['did'] = array(
    'label' => t('Well Daum id'),
    'type' => 'text',
    'description' => 'Node ID of this cluster',
    'schema field' => 'did',
    'getter callback' => 'entity_property_verbatim_get',   // standard getter function
    'setter callback' => 'entity_property_verbatim_set',   // and standard setter function
  );
  // repeat for each field in your target entity
  $properties['serial'] = array(
    'label' => t('Well Datum serial'),
    'type' => 'text',
    'description' => 'serial',
    'schema field' => 'serial',
    'getter callback' => 'entity_property_verbatim_get',   // standard getter function
    'setter callback' => 'entity_property_verbatim_set',   // and standard setter function
  );
  // repeat for each field in your target entity
  $properties['date'] = array(
    'label' => t('Date'),
    'type' => 'text',
    'description' => 'Date of record',
    'schema field' => 'date',
    'getter callback' => 'entity_property_verbatim_get',   // standard getter function
    'setter callback' => 'entity_property_verbatim_set',   // and standard setter function
  );
  $properties['time'] = array(
    'label' => t('Well Datum time'),
    'type' => 'text',
    'description' => 'Time',
    'schema field' => 'time',
    'getter callback' => 'entity_property_verbatim_get',   // standard getter function
    'setter callback' => 'entity_property_verbatim_set',   // and standard setter function
  );
  $properties['time'] = array(
    'label' => t('time'),
    'type' => 'text',
    'description' => 'Time.',
    'schema field' => 'time',
    'getter callback' => 'entity_property_verbatim_get',   // standard getter function
    'setter callback' => 'entity_property_verbatim_set',   // and standard setter function
  );
  $properties['datetime'] = array(
    'label' => t('Well datum datetime'),
    'type' => 'date',
    'description' => 'Datetime of record',
    'schema field' => 'datetime',
    'getter callback' => 'entity_property_verbatim_get',   // standard getter function
    'setter callback' => 'entity_property_verbatim_set',   // and standard setter function
  );
  $properties['level'] = array(
    'label' => t('Well Datum lelvel'),
    'type' => 'decimal',
    'description' => 'LEvel record',
    'schema field' => 'level',
    'getter callback' => 'entity_property_verbatim_get',   // standard getter function
    'setter callback' => 'entity_property_verbatim_set',   // and standard setter function
  );
  $properties['units'] = array(
    'label' => t('Well datum units'),
    'type' => 'text',
    'description' => 'Units.',
    'schema field' => 'units',
    'getter callback' => 'entity_property_verbatim_get',   // standard getter function
    'setter callback' => 'entity_property_verbatim_set',   // and standard setter function
  );
  $properties['calibration'] = array(
    'label' => t('Well Datum calibration level'),
    'type' => 'text',
    'description' => 'Calibration level, either cm or in',
    'schema field' => 'calibration',
    'getter callback' => 'entity_property_verbatim_get',   // standard getter function
    'setter callback' => 'entity_property_verbatim_set',   // and standard setter function
  );

}


